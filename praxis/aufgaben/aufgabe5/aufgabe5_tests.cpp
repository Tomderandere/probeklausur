#include <catch2/catch_test_macros.hpp>

#include "aufgabe5.h"

TEST_CASE("aufgabe5_leerer_baum")
{
    Node root;
    CHECK(root.min_node() == nullptr);
}

TEST_CASE("aufgabe5_nur_wurzel")
{
    Node root;
    root.insert(1, 2);
    CHECK(root.min_node() == &root);
}

TEST_CASE("aufgabe5_zwei_linke_knoten")
{
    Node root;
    root.insert(2, 3); // Wurzel
    root.insert(1, 2); // L
    root.insert(0, 1); // LL (erwartet)
    CHECK(root.min_node() == root.left->left);
}

TEST_CASE("aufgabe5_mehrere_knoten")
{
    Node root;
    root.insert(20, 3); // Wurzel
    root.insert(10, 2); // L
    root.insert(30, 4); // R
    root.insert(0, 1); // LL (erwartet)
    root.insert(40, 5); // RR
    root.insert(5, 6); // LLR
    CHECK(root.min_node() == root.left->left);
}
