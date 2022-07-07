#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42584")
{
	SECTION("CASE_1")
	{
		auto prices = std::vector<int>{1, 2, 3, 2, 3};

		auto answer = solution(prices);
		auto expected = std::vector<int>{4, 3, 1, 1, 0};

		REQUIRE(expected == answer);
	}
}
