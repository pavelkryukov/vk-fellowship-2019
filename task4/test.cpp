#define UNIT_TESTS

#include "../catch.hpp"
#include "code.cpp"

TEST_CASE("Test1")
{
    CHECK( get_sentence("a.b...c.", 1) == "a.");
    CHECK( get_sentence("a.b...c.", 2) == "b...");
    CHECK( get_sentence("a.b...c.", 3) == "c.");
    CHECK( get_sentence("aba.c.abb...d...bba...c.xyz...", 5) == "bba...");
}
