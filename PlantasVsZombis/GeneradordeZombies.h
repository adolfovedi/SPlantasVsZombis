#pragma once
#include "Zombie.h"
#include <ctime>
#include <cstdlib>

class GeneradordeZombies {
private:
    int tasaGeneracion;
    int filaGeneracion;

public:
    GeneradordeZombies(int tasa, int fila);
    void generarZombie();
};
