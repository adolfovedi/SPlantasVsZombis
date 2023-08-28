#pragma once
#include <iostream>

using namespace std;

class CampodeBatalla
{
	// Propiedades Publicas y Privadas del Campo de Batalla
public:

	string Nombre;

private:

	int Filas;
	int Columnas;
	string ImagendeCampo;

	// Constructores
public:

	CampodeBatalla(int, int);

	//Propiedades

	void ColocarPlanta();
};

