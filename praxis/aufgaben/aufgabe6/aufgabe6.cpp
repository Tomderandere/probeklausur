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
std::string result;
    if (this->is_empty())
 {
    return "X";
 }
   if (key==key_)
   {
    return "";
   }
 
   if (key < key_)
   {
    result= "R"+right->path(key_);
   }
    if (key > key_)
   {
   result= "L"+left->path(key_);
   }
for (size_t i = 0; i < result.size(); i++)
{
   if (result[i]=='X'){
 return "X";
   }
}

   return result;
}
