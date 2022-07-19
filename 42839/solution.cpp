#include "solution.h"

bool is_prime_number(const int& number)
{
	if (number == 2)
	{
		return true;
	}

	if (number <= 1 || number % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i * i <= number; i += 2)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int count_possible_prime(const std::string& numbers, const std::string& prefix, std::unordered_set<int>& checked)
{
	int count = 0;

	for (int index = 0; index < numbers.size(); index++)
	{
		auto number = numbers[index];
		auto target = prefix + number;
		auto target_number = static_cast<int>(strtol(target.c_str(), nullptr, 10));

		if (checked.find(target_number) == checked.end())
		{
			checked.insert(target_number);

			if (is_prime_number(target_number))
			{
				count += 1;
			}
		}

		if (numbers.size() > 1)
		{
			auto next_numbers = std::string(numbers);
			next_numbers.erase(index, 1);
			count += count_possible_prime(next_numbers, target, checked);
		}
	}

	return count;
}

int solution(std::string numbers)
{
	auto checked = std::unordered_set<int>();
	return count_possible_prime(numbers, "", checked);
}
