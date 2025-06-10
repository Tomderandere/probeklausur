/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
    if (next==nullptr)
    {
        return {};
    }
    std::vector<int> results;
    results.push_back(value);
    std::vector<int> rest = next-> values();
    results.insert(results.end(), rest.begin(), rest.end());
    return results;
}
