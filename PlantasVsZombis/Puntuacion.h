#pragma once
class Puntuacion
{
private:
    int puntos;

public:
    Puntuacion();
    int getPuntos() const;
    void aumentarPuntos(int cantidad);
};

