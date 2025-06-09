#include <catch2/catch_test_macros.hpp>

#include "aufgabe2.h"

TEST_CASE("aufgabe2_leere_liste")
{
    Element e = { 0, nullptr };
    CHECK(e.length() == 0);
}

TEST_CASE("aufgabe2_einzelnes_element")
{
    Element e2 = { 0, nullptr };
    Element e1 = { 0, &e2 };
    CHECK(e1.length() == 1);
}

TEST_CASE("aufgabe2_mehrere_elemente")
{
    Element e3 = { 0, nullptr };
    Element e2 = { 0, &e3 };
    Element e1 = { 0, &e2 };
    CHECK(e1.length() == 2);
}
