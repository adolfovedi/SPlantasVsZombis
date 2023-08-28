#include "Pala.h"

Pala::Pala(int , int ) {
    usosRestantes = 5;
}

void Pala::usarPala() {
    if (usosRestantes > 0) {

        usosRestantes--;

        if (usosRestantes == 0) {
        }
    }
}