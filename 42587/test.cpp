#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42587")
{
	SECTION("CASE_1")
	{
		auto priorities = std::vector<int>{2, 1, 3, 2};
		int location = 2;

		auto answer = solution(priorities, location);

		REQUIRE(1 == answer);
	}

	SECTION("CASE_2")
	{
		auto priorities = std::vector<int>{1, 1, 9, 1, 1, 1};
		int location = 0;

		auto answer = solution(priorities, location);

		REQUIRE(5 == answer);
	}
}
