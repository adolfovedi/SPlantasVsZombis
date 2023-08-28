#include "Zombie_Lector.h"

Zombie_Lector::Zombie_Lector(string _RutadeImagenZombi)
    : Zombie(_RutadeImagenZombi), TienePeriodico(true)
{

}
void Zombie_Lector::RomperPeriodico()
{
    if (TienePeriodico)
    {
        TienePeriodico = false;
        Velocidad *= 2; // Aumentar la velocidad después de romper el periódico
    }
}

void Zombie_Lector::Atacar()
{
    if (RomperPeriodico)
    {
        nivelFuria *= 2; //Fuerza de ataque aumenta 
    }
}