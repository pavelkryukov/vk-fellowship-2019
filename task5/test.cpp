#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( get_level(1) == 0);
    CHECK( get_level(2) == 1);
    CHECK( get_level(3) == 1);
    CHECK( get_level(4) == 2);
    CHECK( ancestor(2, 3) == 1);
    CHECK( ancestor(9, 8) == 4);
    CHECK( ancestor(9, 5) == 2);
    CHECK( ancestor(1, 2) == 1);
    CHECK( ancestor(14, 15) == 7);
}
