#include "solution.h"

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds)
{
	auto expected_deployments = std::queue<int>();

	for (int index = 0; index < progresses.size(); index++)
	{
		int speed = speeds[index];
		int remain_progress = 100 - progresses[index];

		int expected_deployment = (remain_progress / speed) + (remain_progress % speed == 0 ? 0 : 1);
		expected_deployments.push(expected_deployment);
	}

	std::vector<int> answer;

	int count = 1;
	auto expected = expected_deployments.front();
	for (;;)
	{
		expected_deployments.pop();

		if (expected_deployments.empty())
		{
			answer.push_back(count);
			break;
		}

		auto next = expected_deployments.front();

		if (expected >= next)
		{
			count += 1;
		}

		if (expected < next)
		{
			answer.push_back(count);
			count = 1;
			expected = next;
		}
	}

	return answer;
}
