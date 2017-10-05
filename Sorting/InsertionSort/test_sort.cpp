#include "insertion.hpp"
#include "catch.hpp"

TEST_CASE("is_sorted", "[is_sorted]")
{
    int arr[] = {3, 1, 2};

    REQUIRE_FALSE( Insertion::is_sorted(arr) );
}

TEST_CASE("sort int", "[sort int]")
{
    int arr[] = {3, 1, 2};

    Insertion::sort(arr);

    REQUIRE( Insertion::is_sorted(arr) == true );
}

TEST_CASE("sort string", "[sort string]")
{
    char arr[] = "SORTEXAMPLE";

    Insertion::sort(arr);

    REQUIRE( Insertion::is_sorted(arr) == true );
}