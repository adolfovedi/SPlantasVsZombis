#include "Planta.h"

Planta::Planta()
{
	PosicionX = 500.0f;
	PosicionY = 250.0f;
	TipoPlanta = "Planta";
	Nombre = "Planta";
}

Planta::Planta(string _nombre)
{
	PosicionX = 1000.0f;
	PosicionY = 540.0f;
	TipoPlanta = "Planta";
	Nombre = _nombre;
}

Planta::Planta(string _nombre, int _energia, float _posicionX, float _posicionY, string _tipoPlanta)
{
	Energia = _energia;
	PosicionX = _posicionX;
	PosicionY = _posicionY;
	Nombre = _nombre;
}

void Planta::Morir()
{
	Energia = 0;
}

