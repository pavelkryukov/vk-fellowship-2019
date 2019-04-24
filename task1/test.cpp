#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( square(4, 1) == 1);
    CHECK( square(6, 2) == 2);
    CHECK( square(18, 2) == 18);
    CHECK( square(24, 3) == 27);
}
