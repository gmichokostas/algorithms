#include "selection.hpp"
#include "catch.hpp"

using Catch::Matchers::Equals;

TEST_CASE("is_sorted", "[is_sorted]") {
    Selection<int> selection;
    int arr[] = {3, 1, 2};


    REQUIRE_FALSE( selection.is_sorted(arr) );
}

