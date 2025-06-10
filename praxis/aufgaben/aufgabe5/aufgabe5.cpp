/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe5.h"

// Liefert einen Pointer auf den Knoten mit dem kleinsten Wert im Baum.
// Liefert einen Nullpointer, wenn der Baum leer ist.
Node* Node::min_node()
{
if (this->is_empty())
{
    return nullptr;
}

 if (this->left->is_empty()){
    return this;
 }
 
    return this->left->min_node();
}
