#include "solution.h"

int solution(std::vector<std::vector<std::string>> clothes)
{
	auto cloth_map = std::unordered_map<std::string, int>();

	for (const auto& cloth: clothes)
	{
		cloth_map[cloth[1]] += 1;
	}

	int answer = 1;
	for (const auto& cloth: cloth_map)
	{
		answer *= (cloth.second + 1);
	}

	return answer - 1;
}
