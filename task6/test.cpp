#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( courier(std::deque<int>{ 100}) == 1);
    CHECK( courier(std::deque<int>{ 50, 100, 50, 50}) == 2);
    CHECK( courier(std::deque<int>{ 50, 100, 50, 50, 50}) == 2);
    CHECK( courier(std::deque<int>{ 50, 100, 50, 50, 50, 50}) == 3);
    CHECK( courier(std::deque<int>{ 50, 100, 50, 50, 50, 50, 50}) == 3);
    CHECK( courier(std::deque<int>{ 50, 100, 50, 50, 50, 50, 50, 50}) == 3);
    CHECK( courier(std::deque<int>{ 100, 100, 100}) == 3);
    CHECK( courier(std::deque<int>{ 100, 50, 100}) == 2);
}
