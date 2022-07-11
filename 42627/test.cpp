#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42627")
{
	SECTION("CASE_1")
	{
		auto jobs = std::vector<std::vector<int>>{{0, 3}, {1, 9}, {2, 6}};

		auto answer = solution(jobs);

		REQUIRE(9 == answer);
	}
}
