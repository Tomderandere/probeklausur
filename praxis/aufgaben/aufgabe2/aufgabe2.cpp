/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    if (next==nullptr)
    {
       return 0;
    }
    
    return next->length()+1;
}
// alternativ auch if (this->is_empty))
// pfeil weil this ein pointer ist
// return 1+ (*next).lenght() alternativ