#include "solution.h"

std::vector<int> solution(std::vector<int> prices)
{
	std::vector<int> answer(prices.size());

	auto index_stack = std::stack<int>();

	for (int index = 0; index < prices.size(); index++)
	{
		while (!index_stack.empty())
		{
			auto price = prices[index];

			auto target_index = index_stack.top();
			auto target_price = prices[target_index];

			if (target_price > price)
			{
				answer[target_index] = index - target_index;
				index_stack.pop();
			}
			else
			{
				break;
			}
		}

		index_stack.push(index);
	}

	while (!index_stack.empty())
	{
		auto index = index_stack.top();
		answer[index] = prices.size() - index - 1;
		index_stack.pop();
	}

	return answer;
}
