#include <catch2/catch_test_macros.hpp>

#include "aufgabe4.h"

TEST_CASE("aufgabe4_leere_listen")
{
    std::vector<int> a = {};
    std::vector<int> b = {};
    CHECK(same_elements(a, b));
}

TEST_CASE("aufgabe4_unterschiedliche_laenge")
{
    std::vector<int> a = { 1, 2, 3 };
    std::vector<int> b = { 1, 2 };
    CHECK(!same_elements(a, b));
}

TEST_CASE("aufgabe4_gleiche_laenge_unterschiedliche_elemente")
{
    std::vector<int> a = { 1, 2, 3 };
    std::vector<int> b = { 4, 5, 6 };
    CHECK(!same_elements(a, b));
}

TEST_CASE("aufgabe4_gleiche_elemente_gleiche_reihenfolge")
{
    std::vector<int> a = { 1, 2, 3 };
    std::vector<int> b = { 1, 2, 3 };
    CHECK(same_elements(a, b));
}

TEST_CASE("aufgabe4_gleiche_elemente_unterschiedliche_reihenfolge")
{
    std::vector<int> a = { 1, 2, 3 };
    std::vector<int> b = { 3, 2, 1 };
    CHECK(same_elements(a, b));
}
