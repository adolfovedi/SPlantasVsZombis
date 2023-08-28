#pragma once
#include "Zombie.h"
class Zombie_CaraCubo : public Zombie
{
private:

    int energiaCubo = 300;

public:
    Zombie_CaraCubo() {};

    int getEnergiaCubo() const;
};

