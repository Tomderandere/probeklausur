#include <catch2/catch_test_macros.hpp>
#include "perfectsum.h"



TEST_CASE("find list") {
    std::vector<int> input{1, 5, 2, 3, 4};
    std::vector<int> expected{5, 2, 3}; 
    int goal = 10;   

    auto result = perfectsum(input, goal);


    REQUIRE(result == expected);
}
TEST_CASE("find list 2") {
    std::vector<int> input{1, 4, 3, 2, 5, 3};
    std::vector<int> expected{1, 4}; 
    int goal = 5;   

    auto result = perfectsum(input, goal);


    REQUIRE(result == expected);
}
TEST_CASE("find list 3") {
    std::vector<int> input{1, 5, 6, 2, 4};
    std::vector<int> expected{5, 6, 2}; 
    int goal = 13;   

    auto result = perfectsum(input, goal);


    REQUIRE(result == expected);
}
    TEST_CASE("find no list") {
    std::vector<int> input{1, 5, 6, 2, 4};
    std::vector<int> expected{}; 
    int goal = 23;   

    auto result = perfectsum(input, goal);


    REQUIRE(result == expected);
}