#define UNIT_TESTS

#include "catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    auto result = minimizer( std::vector<unsigned>{1, 5, 11});
    CHECK(result.min == 1);
    CHECK(result.amount == 3);
}

TEST_CASE("Test2")
{
    auto result = minimizer( std::vector<unsigned>{10});
    CHECK(result.min == 10);
    CHECK(result.amount == 1);
}

TEST_CASE("Test3")
{
    auto result = minimizer( std::vector<unsigned>{5, 2, 6, 3, 8});
    CHECK(result.min == 2);
    CHECK(result.amount == 3);
}
