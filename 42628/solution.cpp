#include "solution.h"


std::vector<int> solution(std::vector<std::string> operations)
{
	auto operation_queue = std::deque<int>();

	for (auto operation: operations)
	{
		auto prefix = operation[0];

		if (prefix == 'I')
		{
			auto number = stoi(operation.substr(2));

			if (operation_queue.empty())
			{
				operation_queue.push_front(number);
				continue;
			}

			if (operation_queue.front() < number)
			{
				operation_queue.push_front(number);
				continue;
			}

			if (operation_queue.back() > number)
			{
				operation_queue.push_back(number);
				continue;
			}

			auto size_of_queue = operation_queue.size();
			for (int index = 1; index < size_of_queue - 1; index++)
			{
				if (operation_queue[index] < number)
				{
					operation_queue.insert(operation_queue.begin() + index, number);
					break;
				}
			}
		}
		else
		{
			auto action = operation[2];

			if (operation_queue.empty())
			{
				continue;
			}

			if (action == '1')
			{
				operation_queue.pop_front();
			}
			else
			{
				operation_queue.pop_back();
			}
		}
	}

	if (!operation_queue.empty())
	{
		return std::vector<int>{operation_queue.front(), operation_queue.back()};
	}

	return std::vector<int>{0, 0};
}
