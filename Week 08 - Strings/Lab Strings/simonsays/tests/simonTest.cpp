// Test file for utils.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../../doctest/doctest.h" // FIXME: adjust the path as needed
#include "../utils.h"
#include <string>

TEST_CASE("Test Answer Functionality")
{
    SUBCASE("Sub Case 1: Positive Responses")
    {
        std::string result = answer("Simon says jump");
        CHECK(result == " jump");
        CHECK(answer("Simon says sleep") == " sleep");
        CHECK(answer("Simon says run") == " run");
    }
    SUBCASE("Sub Case 2: Negative Responses")
    {
        CHECK(answer("Do not jump") == "");
        CHECK(answer("Please sleep") == "");
        CHECK(answer("Run fast") == "");
    }
}
