#include <catch2/catch_test_macros.hpp>
#include "leaders.h"

TEST_CASE("find leaders") {
    std::vector<int> input{5, 3, 8, 2, 7, 4};
    std::vector<int> expected{8, 7, 4};

    auto result = leaders(input);


    REQUIRE(result == expected);
}

TEST_CASE("find leaders in order") {
    std::vector<int> input{1, 2, 3, 4, 5};
    std::vector<int> expected{5};

    auto result = leaders(input);


    REQUIRE(result == expected);
}

TEST_CASE("find leaders doppelt") {
    std::vector<int> input{5, 4, 3, 4, 1};
    std::vector<int> expected{5, 4, 4, 1};

    auto result = leaders(input);


    REQUIRE(result == expected);
}