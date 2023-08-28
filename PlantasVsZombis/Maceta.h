#pragma once
#include <iostream>
#include "Planta.h"

using namespace std;

class Maceta
{
private:

	float PosicionX;
	float PosicionY;
	int DireccionY;
	int Alto;
	int Ancho;
	bool ocupada;

public:

	Maceta();

	bool EstaOcupada();
	void Plantar(Planta* nuevaPlanta);

};

