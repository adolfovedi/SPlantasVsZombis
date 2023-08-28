#include "Zombie_CaraCono.h"

void Zombie_CaraCono::niveldeFuria()
{
    DurezaCono += getEnergia();
    if (DurezaCono <= 0) {
        niveldeFuria();
    }
}
