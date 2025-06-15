#include <catch2/catch_test_macros.hpp>
#include "missingnumber.h"

TEST_CASE("find number") {
    std::vector<int> input{1, 3, 4, 5, 6};
    int expected = 2;    

    int result = missingnumber(input);


    REQUIRE(result == expected);
}

TEST_CASE("find number one") {
    std::vector<int> input{4, 2, 3, 6, 5};
    int expected = 1;    

    int result = missingnumber(input);


    REQUIRE(result == expected);
}
