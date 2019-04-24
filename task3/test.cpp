#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( encode(std::deque<int>{6, 6, 2, 2, 2, 2, 1, 2, 3, 3, 3, 3}) == std::deque<int>{2, 6, 4, 2, 1, 1, 1, 2, 4, 3});
    CHECK( encode(std::deque<int>{10, 20, 20}) == std::deque<int>{1, 10, 2, 20});
}
