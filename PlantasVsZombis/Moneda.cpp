#include "Moneda.h"

Moneda::Moneda(string _Visibilidad)
{
	PosicionX = 60;
	PosicionY = 60;
	DireccionY = 30;
	Forma = 10;
	Valor = 50;
}


void Moneda::Recolectar()
{
	PosicionX += DireccionY;
	PosicionY += DireccionY;
}

void Moneda::Actualizar()
{

}

void Moneda::Colicion()
{
}

void Moneda::Respawn()
{
}