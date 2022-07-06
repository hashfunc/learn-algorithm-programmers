#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42583")
{
	SECTION("CASE_1")
	{
		int bridge_length = 2;
		int weight = 10;
		auto truck_weights = std::vector<int>{7, 4, 5, 6};


		auto answer = solution(bridge_length, weight, truck_weights);

		REQUIRE(8 == answer);
	}

	SECTION("CASE_2")
	{
		int bridge_length = 100;
		int weight = 100;
		auto truck_weights = std::vector<int>{10};


		auto answer = solution(bridge_length, weight, truck_weights);

		REQUIRE(101 == answer);
	}

	SECTION("CASE_3")
	{
		int bridge_length = 100;
		int weight = 100;
		auto truck_weights = std::vector<int>{10, 10, 10, 10, 10, 10, 10, 10, 10, 10};


		auto answer = solution(bridge_length, weight, truck_weights);

		REQUIRE(110 == answer);
	}
}
