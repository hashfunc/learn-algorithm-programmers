#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42577")
{
	SECTION("CASE_1")
	{
		auto phone_book = std::vector<std::string>{"119", "97674223", "1195524421"};

		auto answer = solution(phone_book);

		REQUIRE(!answer);
	}

	SECTION("CASE_2")
	{
		auto phone_book = std::vector<std::string>{"123", "456", "789"};

		auto answer = solution(phone_book);

		REQUIRE(answer);
	}

	SECTION("CASE_3")
	{
		auto phone_book = std::vector<std::string>{"12", "123", "1235", "567", "88"};

		auto answer = solution(phone_book);

		REQUIRE(!answer);
	}
}
