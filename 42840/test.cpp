#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42840")
{
	SECTION("CASE_1")
	{
		auto answers = std::vector<int>{1,2,3,4,5};

		auto answer = solution(answers);

		auto expected = std::vector<int>{1};

		REQUIRE(expected == answer);
	}

	SECTION("CASE_2")
	{
		auto answers = std::vector<int>{1,3,2,4,2};

		auto answer = solution(answers);

		auto expected = std::vector<int>{1, 2, 3};

		REQUIRE(expected == answer);
	}
}
