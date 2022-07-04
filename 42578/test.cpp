#include <catch2/catch_test_macros.hpp>

#include "solution.h"

TEST_CASE("42578")
{
	SECTION("CASE_1")
	{
		auto clothes = std::vector<std::vector<std::string>>{{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};

		auto answer = solution(clothes);

		REQUIRE(answer == 5);
	}

	SECTION("CASE_2")
	{
		auto clothes = std::vector<std::vector<std::string>>{{"crow_mask", "face"}, {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}};

		auto answer = solution(clothes);

		REQUIRE(answer == 3);
	}
}
