#include "solution.h"

std::string solution(std::vector<std::string> participant, std::vector<std::string> completion)
{
	auto completion_map = std::unordered_map<std::string, int>();

	for (const auto& key: completion)
	{
		auto iter = completion_map.find(key);
		if (iter == completion_map.end())
		{
			completion_map[key] = 1;
		}
		else
		{
			completion_map[key] = iter->second + 1;
		}
	}

	for (const auto& key: participant)
	{
		auto iter = completion_map.find(key);
		if (iter == completion_map.end() || iter->second == 0)
		{
			return key;
		}
		completion_map[key] = iter->second - 1;
	}

	throw std::invalid_argument("There is no answer");
}
