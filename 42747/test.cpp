#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42747")
{
	SECTION("CASE_1")
	{
		auto citations = std::vector<int>{3, 0, 6, 1, 5};

		auto answer = solution(citations);

		REQUIRE(3 == answer);
	}
}
