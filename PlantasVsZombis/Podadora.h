#pragma once
#include <iostream>
#include <vector>
#include "Zombie.h"

using namespace std;

class Podadora
{
private:
    int UbicacionPodadora; // Fila en la que se encuentra la podadora
    bool EstaActivado; // Estado de la podadora (activada o no)
public:
    Podadora(int y);
    void Activado();
    void Desactivado();
    bool estaActivo();
    void use(vector<Zombie>& zombies); // Método para usar la podadora
};