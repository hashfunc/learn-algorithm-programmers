#include "solution.h"

int solution(int bridge_length, int weight, std::vector<int> truck_weights)
{
	auto bridge_queue = std::list<std::pair<int, int>>();

	int answer = 0;
	int weight_on_bridge = 0;

	for (int index = 0; index < truck_weights.size();)
	{
		auto truck_weight = truck_weights[index];

		if (weight_on_bridge + truck_weight <= weight && bridge_queue.size() < bridge_length)
		{
			bridge_queue.emplace_back(truck_weight, answer);
			weight_on_bridge += truck_weight;
			index++;
		}

		if (!bridge_queue.empty())
		{
			auto truck = bridge_queue.front();
			if (bridge_length == (answer - truck.second + 1))
			{
				bridge_queue.pop_front();
				weight_on_bridge -= truck.first;
			}
		}

		answer++;
	}

	return answer + bridge_length;
}
