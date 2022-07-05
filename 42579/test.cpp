#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42579")
{
	SECTION("CASE_1")
	{
		auto genres = std::vector<std::string>{"classic", "pop", "classic", "classic", "pop"};
		auto players = std::vector<int>{500, 600, 150, 800, 2500};

		auto answer = solution(genres, players);
		auto expected = std::vector<int>{4, 1, 3, 0};

		REQUIRE(expected == answer);
	}
}
