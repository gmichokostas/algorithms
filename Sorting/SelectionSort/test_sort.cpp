#include "selection.hpp"
#include "catch.hpp"

TEST_CASE("is_sorted", "[is_sorted]")
{
    Selection<int> selection;
    int arr[] = {3, 1, 2};


    REQUIRE_FALSE( selection.is_sorted(arr) );
}

TEST_CASE("sort int", "[sort int]")
{
    Selection<int> selection;
    int arr[] = {3, 1, 2};

    selection.sort(arr);

    REQUIRE( selection.is_sorted(arr) == true );
}

TEST_CASE("sort string", "[sort string]")
{
    Selection<char> selection;
    char arr[] = "SORTEXAMPLE";

    selection.sort(arr);

    REQUIRE( selection.is_sorted(arr) == true );
}