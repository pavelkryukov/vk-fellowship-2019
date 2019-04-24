#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( water(140, 10, 170).first == 10);
    CHECK( water(140, 10, 170).second == 10);
    CHECK( water(10, 10, 21) == std::pair<int, int>{1, 0});
    CHECK( water(150, 0, 150) == std::pair<int, int>{0, 0});
    CHECK( water(0, 0, 150) == std::pair<int, int>{150, 0});
    CHECK( water(75, 75, 300) == std::pair<int, int>{75, 75});
}
