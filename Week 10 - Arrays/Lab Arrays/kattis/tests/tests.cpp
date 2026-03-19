#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../../doctest/doctest.h"

#include "../lineup.h"

TEST_CASE("Testing odd_or_even function")
{
    SUBCASE("Sub Case 1: INCREASING data")
    {
        std::string test1[] = {"a", "h", "z", "zz"};
        std::string result = direction(test1, 4);
        CHECK(result == "INCREASING");
    }
    SUBCASE("Sub Case 2: DECREASING data")
    {
        std::string test2[] = {"zz", "z", "h", "a"};
        std::string result = direction(test2, 4);
        CHECK(result == "DECREASING");
    }
    SUBCASE("Sub Case 3: NEITHER data")
    {
        std::string test3[] = {"a", "h", "z", "b"};
        std::string result = direction(test3, 4);
        CHECK(result == "NEITHER");
    }
}
