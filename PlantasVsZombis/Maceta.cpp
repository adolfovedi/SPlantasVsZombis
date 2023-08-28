#include "Maceta.h"

Maceta::Maceta()
{
}

bool Maceta::EstaOcupada()
{
	return ocupada;
}

void Maceta::Plantar(Planta* nuevaPlanta)
{
	if (!ocupada) {
		ocupada = true;
	}
}
