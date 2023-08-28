#pragma once
#include <iostream>

using namespace std;

class Zombie
{
private:
	int Energia = 100;
	int nivelFuria;

	string TipoZombie;
	string Nombre;

protected:
	float PosicionX;
	float PosicionY;
	int DireccionX;
	int DireccionY;
	int Velocidad;

public:
	//Contructores
	Zombie();
	Zombie(string _nombre);
	Zombie(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie);

	//Metodos accesores
	void setEnergia(int _energia) { Energia = _energia; }
	int getEnergia() { return Energia; }

	void setNombre(string _nombre) { Nombre = _nombre; }
	string getNombre() { return Nombre; }

	void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
	int getNivelFuria() { return nivelFuria; }

	void setVelocidad(int _velocidad) { Velocidad = _velocidad; }
	int getVelocidad() { return Velocidad; }

	void setPosicionX(float _posicionX) { PosicionX = _posicionX; }
	float getPosicionX() { return PosicionX; }

	void setPosicionY(float _posicionY) { PosicionY = _posicionY; }
	float getPosicionY() { return PosicionY; }

	void setTipoZombie(string _tipoZombie) { TipoZombie = _tipoZombie; }
	string getTipoZombie() { return TipoZombie; }



	//Metodos propios
	void moverse();
	void moverse(float, float);
	void moverse(float, float, int);

	void atacar();
	void morir();
	void morder();
};