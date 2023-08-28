#pragma once
#include "Zombie.h"
class Zombie_Deportista :public Zombie
{
public:
	int nivelFuria;
	int Energia;

	Zombie_Deportista(string _RutadeImagenZombi);

	void CorrerRapido();
	void Atacar(); // Sobrescribir el método Atacar de la clase base
};
