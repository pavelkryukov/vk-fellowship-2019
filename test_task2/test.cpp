#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Degenerative")
{
    CHECK( is_square(""));
}

TEST_CASE("Uneven")
{
    CHECK_FALSE( is_square("x"));
}

TEST_CASE("Squares")
{
    CHECK( is_square("abcabc"));
    CHECK( is_square("zz"));
    CHECK( is_square("testtest"));
}

TEST_CASE("Not Squares")
{
    CHECK_FALSE( is_square("test"));
    CHECK_FALSE( is_square("xyz"));
    CHECK_FALSE( is_square("acdc"));
}
