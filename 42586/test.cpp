#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42586")
{
	SECTION("CASE_1")
	{
		auto progresses = std::vector<int>{93, 30, 55};
		auto speeds = std::vector<int>{1, 30, 5};

		auto answer = solution(progresses, speeds);
		auto expected = std::vector<int>{2, 1};

		REQUIRE(expected == answer);
	}

	SECTION("CASE_2")
	{
		auto progresses = std::vector<int>{95, 90, 99, 99, 80, 99};
		auto speeds = std::vector<int>{1, 1, 1, 1, 1, 1};

		auto answer = solution(progresses, speeds);
		auto expected = std::vector<int>{1, 3, 2};

		REQUIRE(expected == answer);
	}
}
