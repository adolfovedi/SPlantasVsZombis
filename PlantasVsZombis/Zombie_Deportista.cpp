#include "Zombie_Deportista.h"

Zombie_Deportista::Zombie_Deportista(string _RutadeImagenZombi)
    : Zombie(_RutadeImagenZombi)
{
    Energia += Energia;
}

void Zombie_Deportista::CorrerRapido()
{
    Velocidad *= 2; // Aumentar la velocidad del Zombie_Deportista al correr
}

void Zombie_Deportista::Atacar()
{
    nivelFuria *= 2;
}