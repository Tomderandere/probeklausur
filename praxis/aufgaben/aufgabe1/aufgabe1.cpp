/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const& v)
{
    // begin:solution
    if (v.empty()) {
        return true;
    }

    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }

    return true;
    // end:solution
}
