#include "Zombie_Deportista.h"
#include "Zombie.h"
class Zombie_Lector : public Zombie
{
private:
	bool TienePeriodico;
public:
	int nivelFuria;

	Zombie_Lector(string);

	void RomperPeriodico();
	void Atacar();
};