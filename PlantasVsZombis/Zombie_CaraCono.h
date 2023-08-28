#pragma once
#include "Zombie.h"
class Zombie_CaraCono :
    public Zombie
{
private:
    int velocidad = 30;
    int DurezaCono = 100;
public:

    Zombie_CaraCono() {};
    //metodos accesores
    int getVelocidad() { return velocidad; }
    void setVelocidad(int _Velocidad) { velocidad = _Velocidad; }
    int getDurezaCono() { return DurezaCono; }
    void getDurezaCono(int _DurezaCono) { DurezaCono = _DurezaCono; }
    void niveldeFuria();
};

