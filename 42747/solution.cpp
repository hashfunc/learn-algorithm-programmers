#include "solution.h"

int solution(std::vector<int> citations)
{
	std::sort(citations.begin(), citations.end(), std::greater<>());

	for (int index = 0; index < citations.size(); index++)
	{
		if (index >= citations[index])
		{
			return index;
		}
	}

	return citations.size() - 1;
}
