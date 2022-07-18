#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42748")
{
	SECTION("CASE_1")
	{
		auto array = std::vector<int>{1, 5, 2, 6, 3, 7, 4};
		auto commands = std::vector<std::vector<int>>{{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};

		auto answer = solution(array, commands);

		auto expected = std::vector<int>{5, 6, 3};

		REQUIRE(expected == answer);
	}
}
