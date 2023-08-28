#include "GeneradorHordas_Zombies.h"

GeneradorHordas_Zombies::GeneradorHordas_Zombies()
    : nivelHorda(1), zombieEnHorda(nullptr)
{
    
}

void GeneradorHordas_Zombies::GenerarHorda(){
{
    if (zombieEnHorda != nullptr)
    {
        delete zombieEnHorda;
        zombieEnHorda = nullptr;
    }
}
    zombieEnHorda = new Zombie("ruta_imagen_zombie.png");
}

void GeneradorHordas_Zombies::AvanzarHorda()
{
    if (zombieEnHorda != nullptr)
    {
  /*      zombieEnHorda->Moverse();
        zombieEnHorda->nivelFuria();*/
    }
}

void GeneradorHordas_Zombies::MostrarHorda()
{
  
}
