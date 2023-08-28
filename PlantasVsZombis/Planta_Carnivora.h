#pragma once
#include "Planta.h"
class Planta_Carnivora :public Planta
{
private:
	int Energia = 300;
	void ComerZombi();
};

