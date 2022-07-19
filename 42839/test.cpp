#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42839")
{
	SECTION("CASE_1")
	{
		std::string numbers = "17";

		auto answer = solution(numbers);

		REQUIRE(3 == answer);
	}

	SECTION("CASE_2")
	{
		std::string numbers = "011";

		auto answer = solution(numbers);

		REQUIRE(2 == answer);
	}
}
