#pragma once
#include <iostream>

using namespace std;

class Planta
{
	// Propiedades Publicas y Privadas de la Planta
private:
	int Energia = 100;

	string TipoPlanta;
	string Nombre;

protected:
	float PosicionX;
	float PosicionY;
	int DireccionX;
	int DireccionY;
	int precioSol;

public:
	// Constructores
	Planta();
	Planta(string _nombre);
	Planta(string _nombre, int _energia, float _posicionX, float _posicionY, string _tipoPlanta);

	// Metodos Accesores

	void setNombre(string _nombre) { Nombre = _nombre; }
	string getNombre() { return Nombre; }

	int getEnergia() { return Energia; }
	void setEnergia(int _energia) { Energia = _energia; }

	void setPosicionX(float _posicionX) { PosicionX = _posicionX; }
	float getPosicionX() { return PosicionX; }

	void setPosicionY(float _posicionY) { PosicionY = _posicionY; }
	float getPosicionY() { return PosicionY; }

	void setTipoZombie(string _tipoPlanta) { TipoPlanta = _tipoPlanta; }
	string getTipoZombie() { return TipoPlanta; }

	// Metodos Propios
	void Morir();

};

