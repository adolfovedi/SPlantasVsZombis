#include "Podadora.h"

Podadora::Podadora(int y) {
    this->UbicacionPodadora = y;
    EstaActivado = false; // La podadora comienza desactivada
}

void Podadora::Activado() {
    EstaActivado = true;
}

void Podadora::Desactivado() {
    EstaActivado = false;
}

bool Podadora::estaActivo() {
    return EstaActivado;
}

void Podadora::use(vector<Zombie>& zombis) {
    if (estaActivo()) {
        // Eliminar zombis en la fila Y
        for (auto it = zombis.begin(); it != zombis.end(); ) {
            if ( it -> getPosicionX() == UbicacionPodadora) {
                it = zombis.erase(it);
            }
            else {
                ++it;
            }
        }
        Desactivado(); // Desactivar la podadora después de su uso
    }
}