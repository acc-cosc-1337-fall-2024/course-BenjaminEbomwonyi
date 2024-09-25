#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test menu option")
{
	REQUIRE("invalid option"== menu_option(0));
	REQUIRE("option"== menu_option(1));
	REQUIRE("option"== menu_option(2));
	REQUIRE("option"== menu_option(3));
	REQUIRE("option"== menu_option(4));
}