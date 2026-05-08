#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../../doctest/doctest.h" //FIXED: adjust the path as needed
#include "../includes/num_system.hpp"

TEST_CASE("Testing decToBin function")
{
    SUBCASE("Typical case")
    {
        CHECK(decToBin(10) == "1010");
    }
    SUBCASE("Edge case: zero")
    {
        CHECK(decToBin(0) == "0");
    }
    // FIXED: Add 2 more test cases to cover edge cases
    SUBCASE("Edge case: one")
    {
        CHECK(decToBin(1) == "1");
    }
    SUBCASE("Larger number")
    {
        CHECK(decToBin(255) == "11111111");
    }
}

TEST_CASE("Testing binToDec function")
{
    SUBCASE("Typical case")
    {
        CHECK(binToDec("1010") == 10);
    }
    SUBCASE("Edge case: zero")
    {
        CHECK(binToDec("0") == 0);
    }
    // FIXED: Add 2 more test cases to cover edge cases
    SUBCASE("Edge case: one")
    {
        CHECK(binToDec("1") == 1);
    }
    SUBCASE("Larger binary number")
    {
        CHECK(binToDec("11111111") == 255);
    }
}

// FIXED: Write test cases (with at least 2 subcases) for decToOct function declared in num_system.hpp
TEST_CASE("Testing decToOct function")
{
    SUBCASE("Typical case")
    {
        CHECK(decToOct(10) == "12");
    }
    SUBCASE("Edge case: zero")
    {
        CHECK(decToOct(0) == "");
    }
    SUBCASE("Small number")
    {
        CHECK(decToOct(8) == "10");
    }
    SUBCASE("Larger number")
    {
        CHECK(decToOct(64) == "100");
    }
}

// FIXED: Write test cases (with at least 2 subcases) for octToDec function declared in num_system.hpp
TEST_CASE("Testing octToDec function")
{
    SUBCASE("Typical case")
    {
        CHECK(octToDec("12") == 10);
    }
    SUBCASE("Edge case: zero")
    {
        CHECK(octToDec("0") == 0);
    }
    SUBCASE("Small number")
    {
        CHECK(octToDec("10") == 8);
    }
    SUBCASE("Larger number")
    {
        CHECK(octToDec("100") == 64);
    }
}