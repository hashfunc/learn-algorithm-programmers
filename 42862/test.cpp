#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42862")
{
	SECTION("CASE_1")
	{
		constexpr int n = 5;
		auto lost = std::vector<int>{2, 4};
		auto reserve = std::vector<int>{1, 3, 5};

		auto answer = solution(n, lost, reserve);
		constexpr int expected = 5;

		REQUIRE(expected == answer);
	}

	SECTION("CASE_2")
	{
		constexpr int n = 5;
		auto lost = std::vector<int>{2, 4};
		auto reserve = std::vector<int>{3};

		auto answer = solution(n, lost, reserve);
		constexpr int expected = 4;

		REQUIRE(expected == answer);
	}

	SECTION("CASE_3")
	{
		constexpr int n = 3;
		auto lost = std::vector<int>{3};
		auto reserve = std::vector<int>{1};

		auto answer = solution(n, lost, reserve);
		constexpr int expected = 2;

		REQUIRE(expected == answer);
	}
}
