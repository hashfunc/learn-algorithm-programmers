#include "solution.h"

int solution(std::vector<int> priorities, int location)
{
	auto print_queue = std::list<std::pair<int, int>>();

	for (int index = 0; index < priorities.size(); index++)
	{
		print_queue.emplace_back(index, priorities[index]);
	}

	int answer = 0;

	do {
		auto document = print_queue.front();
		print_queue.pop_front();

		for (auto next: print_queue)
		{
			if (next.second > document.second)
			{
				print_queue.push_back(document);
				break;
			}
		}

		if (document != print_queue.back())
		{
			answer += 1;

			if (document.first == location)
			{
				return answer;
			}
		}

	} while (!print_queue.empty());

	return answer;
}
