#include <catch2/catch_test_macros.hpp>

#include "aufgabe6.h"

TEST_CASE("aufgabe6_leerer_baum")
{
    Node root;
    CHECK(root.path(42) == "X");
}

TEST_CASE("aufgabe6_nicht_enthalten")
{
    Node root;
    root.insert(42, 1);
    CHECK(root.path(1) == "X");
}

TEST_CASE("aufgabe6_wurzel")
{
    Node root;
    root.insert(42, 1);
    CHECK(root.path(42) == "");
}

TEST_CASE("aufgabe6_linker_teilbaum")
{
    Node root;
    root.insert(42, 1); // Wurzel
    root.insert(21, 2); // L
    root.insert(63, 3); // R
    root.insert(10, 4); // LL (erwartet)
    root.insert(84, 5); // RR
    CHECK(root.path(10) == "LL");
}

TEST_CASE("aufgabe6_rechter_teilbaum")
{
    Node root;
    root.insert(42, 1); // Wurzel
    root.insert(21, 2); // L
    root.insert(63, 3); // R
    root.insert(10, 4); // LL
    root.insert(84, 5); // RR (erwartet)
    CHECK(root.path(84) == "RR");
}
