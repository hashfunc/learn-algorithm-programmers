#include "solution.h"

int solution(int n, std::vector<int> lost, std::vector<int> reserve)
{
	std::sort(reserve.begin(), reserve.end());

	auto lost_set = std::unordered_set<int>{lost.begin(), lost.end()};

	for (int index = 0; index < reserve.size(); ++index)
	{
		const auto& number = reserve[index];

		if (lost_set.find(number) != lost_set.end())
		{
			lost_set.erase(number);
		}
		else if (lost_set.find(number - 1) != lost_set.end())
		{
			lost_set.erase(number - 1);
		}
		else if (lost_set.find(number + 1) != lost_set.end())
		{
			if (index + 1 < reserve.size() && reserve[index + 1] == number + 1)
			{
				continue;
			}
			lost_set.erase(number + 1);
		}
	}

	return static_cast<int>(n - lost_set.size());
}
