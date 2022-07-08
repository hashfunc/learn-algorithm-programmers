#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42626")
{
	SECTION("CASE_1")
	{
		auto scoville = std::vector<int>{1, 2, 3, 9, 10, 12};
		int K = 7;

		auto answer = solution(scoville, K);

		REQUIRE(2 == answer);
	}
}
