#pragma once
#include <iostream>

using namespace std;

class Proyectil
{
	// Propiedades
private:
	int Velocidad;
	int Da�o;
	string Imagen;

	//Constructor
public:
	Proyectil(string, int, int);

	// Metodos Accesores y propios

	string getImagen(){ return Imagen; }
	void setImagen(string _imagen) { Imagen = _imagen; }
	int getVelocidad() { return Velocidad; }
	void setVelocidad(int _velocidad) { Velocidad = _velocidad; }
	int getDa�o() { return Da�o; }
	void setDa�o(int _da�o) { Da�o = _da�o; }

};

