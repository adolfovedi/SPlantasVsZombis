#include "Puntuacion.h"

Puntuacion::Puntuacion() : puntos(0) {}

int Puntuacion::getPuntos() const {
    return puntos;
}

void Puntuacion::aumentarPuntos(int cantidad) {
    puntos += cantidad;
}