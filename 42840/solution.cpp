#include "solution.h"


std::vector<int> solution(std::vector<int> answers)
{
	auto generators = std::vector<std::function<int(int)>>{
			[](int index) {
				return index % 5 + 1;
			},
			[](int index) {
				static const int numbers[] = {2, 1, 2, 3, 2, 4, 2, 5};
				return numbers[index % 8];
			},
			[](int index) {
				static const int numbers[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
				return numbers[index % 10];
			}};

	auto scores = std::array<int, 3>{0, 0, 0};

	for (int index = 0; index < answers.size(); index++)
	{
		for (int generator = 0; generator < generators.size(); generator++)
		{
			if (generators[generator](index) == answers[index])
			{
				scores[generator] += 1;
			}
		}
	}

	const auto& max_score = *std::max_element(scores.begin(), scores.end());

	auto answer = std::vector<int>();
	for (int index = 0; index < scores.size(); index++)
	{
		if (scores[index] == max_score)
		{
			answer.push_back(index + 1);
		}
	}

	return answer;
}
