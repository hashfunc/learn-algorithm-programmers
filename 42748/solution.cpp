#include "solution.h"


std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands)
{
	std::vector<int> answer;

	for (auto command: commands)
	{
		const int i = command[0] - 1, j = command[1], k = command[2] - 1;

		auto partial_array = std::vector<int>(j - i);
		std::partial_sort_copy(
				array.begin() + i, array.begin() + j,
				partial_array.begin(), partial_array.end());

		answer.push_back(partial_array[k]);
	}

	return answer;
}
