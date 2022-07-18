#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42746")
{
	SECTION("CASE_1")
	{
		auto numbers = std::vector<int>{6, 10, 2};

		auto answer = solution(numbers);

		REQUIRE("6210" == answer);
	}

	SECTION("CASE_2")
	{
		auto numbers = std::vector<int>{3, 30, 34, 5, 9};

		auto answer = solution(numbers);

		REQUIRE("9534330" == answer);
	}
}
