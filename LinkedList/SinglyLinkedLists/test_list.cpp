#include "list.hpp"
#include "catch.hpp"

TEST_CASE("is_empty", "[is_empty]")
{
    List<int> list;
    list.append(1);

    REQUIRE_FALSE( list.is_empty() );
}

TEST_CASE("length", "[length]")
{
    List<int> list;
    list.append(1);

    REQUIRE( list.length() == 1 );
}