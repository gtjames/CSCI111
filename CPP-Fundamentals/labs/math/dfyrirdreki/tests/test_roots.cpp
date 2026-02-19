#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../doctest/doctest.h" // FIXME: adjust the path as needed
#include "../src/roots.h"

TEST_CASE("Testing find_discriminant function")
{
    SUBCASE("Discriminant is positive")
    {
        CHECK(find_discriminant(1, 5, 6) == 1); // 5^2 - 4*1*6 = 25 - 24 = 1
    }
    SUBCASE("Discriminant is zero")
    {
        CHECK(find_discriminant(1, 2, 1) == 0); // 2^2 - 4*1*1 = 4 - 4 = 0
    }
    // FIXME4: Add 6 more test cases to cover edge cases
}

TEST_CASE("Testing find_roots function")
{
    SUBCASE("No real roots when discriminant is negative")
    {
        CHECK(find_roots(-1) == 0);
    }
    SUBCASE("One real root when discriminant is zero")
    {
        CHECK(find_roots(0) == 1);
    }
    // FIXME5: Add 3 more test cases to cover edge cases
}