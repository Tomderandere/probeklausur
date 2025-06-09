/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    // begin:solution
    if (a.size() != b.size()) {
        return false;
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
    // end:solution
}
