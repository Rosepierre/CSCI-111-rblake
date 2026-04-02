#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../doctest/doctest.h" // FIXME: adjust the path as needed
#include "../src/util.hpp"

TEST_CASE("Testing answer function")
{
    SUBCASE("String contains 'ss'")
    {
        CHECK(answer("hiss") == "hiss");
        CHECK(answer("mississippi") == "hiss");
    }
    SUBCASE("String does not contain 'ss'")
    {
        CHECK(answer("hello") == "no hiss");
        CHECK(answer("abcde") == "no hiss");
    }
}

// FIXED: Add 2 more test cases to cover edge cases
TEST_CASE("Testing edge cases")
{
    SUBCASE("String is empty")
    {
        CHECK(answer("") == "no hiss");
    }
    SUBCASE("String has only one character")
    {
        CHECK(answer("s") == "no hiss");
    }
}