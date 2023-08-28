//INTEGRANTES DE GRUPO: "PACHECO LOVERS"
//VEDIA RENE
//POLARES ORTIZ NELSON
//IBARRA ALEJANDRO WILSON RAMIRO
//BLANCO MARTINEZ OSCAR JOHN


#include <iostream>
#include "Planta.h"
#include "Zombie.h"
#include "Zombie_Abanderado.h"
#include "Zombie_CaraCubo.h"
#include "Zombie_CaraCono.h"


using namespace std;

int main() {
	//--------------------> Zombie Basico <-------------------
	Zombie* Zombie_Basic = new Zombie("Zombie Basico");
	cout << "El nombre del zombie es: " << Zombie_Basic->getNombre() << endl;
	cout << "La energia del zombie es: " << Zombie_Basic->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << Zombie_Basic->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Zombie_Basic->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Zombie_Basic->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << Zombie_Basic->getTipoZombie() << endl;
	cout << endl;

	////--------------------> Zombie Abanderado <-------------------

	Zombie_Abanderado* ZombieAbanderado = new Zombie_Abanderado();
	ZombieAbanderado->setNombre("Abanderado");
	cout << "El nombre del zombie es: " << ZombieAbanderado->getNombre() << endl;
	cout << "La energia del zombie es: " << ZombieAbanderado->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << ZombieAbanderado->getVelocidadAbanderado() << endl;
	cout << "La posicion X del zombie es: " << ZombieAbanderado->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieAbanderado->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << ZombieAbanderado->getTipoZombie() << endl;
	cout << endl;

	//--------------------> Zombie Cara Cubo  <-------------------

	Zombie_CaraCubo* ZombieCaraCubo = new Zombie_CaraCubo();
	ZombieCaraCubo->setNombre("Cara Cubo");
	cout << "El nombre del zombie es: " << ZombieCaraCubo->getNombre() << endl;
	cout << "La energia del zombie es: " << ZombieCaraCubo->getEnergiaCubo() << endl;
	cout << "La velocidad del zombie es: " << ZombieCaraCubo->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << ZombieCaraCubo->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieCaraCubo->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << ZombieCaraCubo->getTipoZombie() << endl;
	cout << "La posicion X del zombie es: " << ZombieCaraCubo->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieCaraCubo->getPosicionY() << endl;
	cout << endl;
	//--------------------> Zombie Cara Cono  <-------------------
	Zombie_CaraCono* ZombieCaracono = new Zombie_CaraCono();
	ZombieCaracono->setNombre("Cara Cono");
	cout << "El nombre del zombie es: " << ZombieCaracono->getNombre() << endl;
	cout << "La energia del zombie es: " << ZombieCaracono->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << ZombieCaracono->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << ZombieCaracono->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieCaracono->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << ZombieCaracono->getTipoZombie() << endl;
	cout << "La posicion X del zombie es: " << ZombieCaracono->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieCaracono->getPosicionY() << endl;
	cout << endl;
}