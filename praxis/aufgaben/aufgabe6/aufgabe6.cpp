/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 *ERREICHBARE PUNKTE : 10
 */

#include "aufgabe6.h"
#include "string"

// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
// Liefert einen Pfad zu diesem Knoten als String.
// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
std::string Node::path(int key_)
{

    if (this->is_empty())
 {
    return "X";
 }
   if (this->key==key_)
   {
    return "";
   }
 
   if (this->key < key_&& this->right != nullptr)
   {
    return "R"+this->right->path(key_);
   }
    if (this->key > key_&& this->left != nullptr)
   {
   return "L"+this->left->path(key_);
   }

    return "X";
}
