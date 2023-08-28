#include "Zombie.h"

Zombie::Zombie()
{
	//energia = 100;
	nivelFuria = 20;
	Velocidad = 30;
	PosicionX = 1000.0f;
	PosicionY = 540.0f;
	TipoZombie = "Zombie normal";
	Nombre = "Zombie anonimo";
}

Zombie::Zombie(string _nombre)
{
	//energia = 100;
	nivelFuria = 20;
	Velocidad = 30;
	PosicionX = 1000.0f;
	PosicionY = 540.0f;
	TipoZombie = "Zombie normal";
	Nombre = _nombre;
}

Zombie::Zombie(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie)
{
	Energia = _energia;
	nivelFuria = _nivelFuria;
	Velocidad = _velocidad;
	PosicionX = _posicionX;
	PosicionY = _posicionY;
	TipoZombie = _tipoZombie;
	Nombre = _nombre;
}

void Zombie::moverse()
{
	PosicionX += Velocidad;
	PosicionY += Velocidad;

}

void Zombie::moverse(float _posicionSiguienteX, float _posicionSiguienteY)
{
}

void Zombie::moverse(float _posicionFinalX, float _posicionFinalY, int _velocidad)
{
}

void Zombie::atacar()
{
}

void Zombie::morir() {

}

void Zombie::morder()
{
}