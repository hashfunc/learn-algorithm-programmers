#include "solution.h"

bool compare(const std::string& x, const std::string& y)
{
	return x + y > y + x;
}

std::string join_string(const std::vector<std::string>& numbers)
{
	std::string result;
	for (const auto& number: numbers)
	{
		result += number;
	}
	return result;
}


std::string solution(std::vector<int> numbers)
{
	auto number_strings = std::vector<std::string>(numbers.size());

	for (int index = 0; index < number_strings.size(); index++)
	{
		number_strings[index] = std::to_string(numbers[index]);
	}

	std::sort(number_strings.begin(), number_strings.end(), compare);

	auto answer = join_string(number_strings);

	if (answer[0] == '0')
	{
		return "0";
	}

	return answer;
}
