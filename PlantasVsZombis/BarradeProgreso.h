#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class BarradeProgreso
{
private:
    int totalZombies;
    int zombisRestantes;

public:
    BarradeProgreso(int total);
    void actualizar(int restantes);
    void mostrar();
};

