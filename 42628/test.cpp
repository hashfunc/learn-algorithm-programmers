#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42628")
{
	SECTION("CASE_1")
	{
		auto operations = std::vector<std::string>{"I 16", "I -5643", "D -1", "D 1", "D 1", "I 123", "D -1"};

		auto answer = solution(operations);

		auto expected = std::vector<int>{0, 0};

		REQUIRE(expected == answer);
	}

	SECTION("CASE_2")
	{
		auto operations = std::vector<std::string>{"I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333"};

		auto answer = solution(operations);

		auto expected = std::vector<int>{333, -45};

		REQUIRE(expected == answer);
	}
}
