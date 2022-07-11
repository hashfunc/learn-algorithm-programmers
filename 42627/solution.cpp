#include "solution.h"


int solution(std::vector<std::vector<int>> jobs)
{
	std::sort(jobs.begin(), jobs.end());

	auto count_of_job = jobs.size();
	auto job_queue = std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>>();

	int acc = 0;

	for (int index = 0, time = 0; index < count_of_job || !job_queue.empty();)
	{
		if (index < count_of_job)
		{
			auto job = jobs[index];

			if (job[0] <= time)
			{
				job_queue.emplace(job[1], job[0]);
				index++;
				continue;
			}
		}

		if (!job_queue.empty())
		{
			auto job = job_queue.top();
			job_queue.pop();

			time += job.first;
			acc += time - job.second;
		}
		else
		{
			time++;
		}
	}

	return acc / count_of_job;
}
