#include <catch2/catch_test_macros.hpp>

#include "aufgabe3.h"

TEST_CASE("aufgabe3_leere_liste")
{
    Element e = { 0, nullptr };
    CHECK(e.values() == std::vector<int> {});
}

TEST_CASE("aufgabe3_einzelnes_element")
{
    Element e2 = { 0, nullptr };
    Element e1 = { 42, &e2 };
    CHECK(e1.values() == std::vector<int> { 42 });
}

TEST_CASE("aufgabe3_mehrere_elemente")
{
    Element e3 = { 0, nullptr };
    Element e2 = { 23, &e3 };
    Element e1 = { 42, &e2 };
    CHECK(e1.values() == std::vector<int> { 42, 23 });
}
