#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42576")
{
	SECTION("CASE_1")
	{
		auto participant = std::vector<std::string>{"leo", "kiki", "eden"};
		auto completion = std::vector<std::string>{"eden", "kiki"};

		auto answer = solution(participant, completion);

		REQUIRE(answer == "leo");
	}

	SECTION("CASE_2")
	{
		auto participant = std::vector<std::string>{"marina", "josipa", "nikola", "vinko", "filipa"};
		auto completion = std::vector<std::string>{"josipa", "filipa", "marina", "nikola"};

		auto answer = solution(participant, completion);

		REQUIRE(answer == "vinko");
	}

	SECTION("CASE_3")
	{
		auto participant = std::vector<std::string>{"mislav", "stanko", "mislav", "ana"};
		auto completion = std::vector<std::string>{"stanko", "ana", "mislav"};

		auto answer = solution(participant, completion);

		REQUIRE(answer == "mislav");
	}
}
