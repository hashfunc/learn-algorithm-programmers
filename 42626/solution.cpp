#include "solution.h"

int solution(std::vector<int> scoville_vector, int K)
{
	std::priority_queue<int, std::vector<int>, std::greater<>> scoville_queue(scoville_vector.begin(), scoville_vector.end());

	int answer = 0;

	while (scoville_queue.size() > 1)
	{
		auto first = scoville_queue.top();

		if (first > K)
		{
			return answer;
		}

		scoville_queue.pop();

		auto second = scoville_queue.top();
		scoville_queue.pop();

		scoville_queue.push(first + (second * 2));

		answer++;
	}

	return scoville_queue.top() > K ? answer : -1;
}
