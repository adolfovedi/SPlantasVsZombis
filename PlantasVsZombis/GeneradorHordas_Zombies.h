#pragma once
#include "Zombie.h"

class GeneradorHordas_Zombies
{
private:
    Zombie* zombieEnHorda;
    int nivelHorda;

public:
    GeneradorHordas_Zombies();

    void GenerarHorda();
    void AvanzarHorda();
    void MostrarHorda();
};

