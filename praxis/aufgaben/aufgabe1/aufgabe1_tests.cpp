#include <catch2/catch_test_macros.hpp>

#include "aufgabe1.h"

TEST_CASE("aufgabe1_sortiert", "[aufgabe1]")
{
    CHECK(is_sorted_ascending({ 1 }));
    CHECK(is_sorted_ascending({ 1, 2 }));
    CHECK(is_sorted_ascending({ 1, 2, 3 }));
    CHECK(is_sorted_ascending({ 1, 2, 3, 4, 5 }));
    CHECK(is_sorted_ascending({}));
}

TEST_CASE("aufgabe1_nicht sortiert")
{
    CHECK_FALSE(is_sorted_ascending({ 2, 1 }));
    CHECK_FALSE(is_sorted_ascending({ 3, 2, 1 }));
    CHECK_FALSE(is_sorted_ascending({ 5, 4, 6 }));
    CHECK_FALSE(is_sorted_ascending({ -1, -2, -1 }));
}
