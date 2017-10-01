#include "list.hpp"
#include "catch.hpp"

using Catch::Matchers::Equals;

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

TEST_CASE("get_first", "[get_first]")
{
    List<int> list;
    list.prepend(1);

    REQUIRE_THAT( list.get_first(), Equals("1") );

    list.prepend(2);
    REQUIRE_THAT( list.get_first(), Equals("2") );
}

TEST_CASE("get_last", "[get_last]")
{
    List<int> list;
    list.prepend(1);

    REQUIRE_THAT( list.get_last(), Equals("1") );

    list.prepend(2);
    REQUIRE_THAT( list.get_last(), Equals("1") );

    list.append(2);
    REQUIRE_THAT( list.get_last(), Equals("2"));
}