#include "selection.hpp"
#include "catch.hpp"

TEST_CASE("is_sorted", "[is_sorted]")
{
    Selection<int> selection;
    int arr[] = {3, 1, 2};


    REQUIRE_FALSE( selection.is_sorted(arr) );
}

TEST_CASE("sort", "[sort]")
{
    Selection<int> selection;
    int arr[] = {3, 1, 2};

    selection.sort(arr);

    REQUIRE( selection.is_sorted(arr) == true );
}

