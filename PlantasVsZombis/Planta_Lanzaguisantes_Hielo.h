#pragma once
#include "Planta_Lanzaguisantes.h"
class Planta_Lanzaguisantes_Hielo :public Planta_Lanzaguisantes
{
private: 
	int Energia = 250;
public:
	void Reducir_Velocidad();
	void Reducir_nivelFuria();
};

