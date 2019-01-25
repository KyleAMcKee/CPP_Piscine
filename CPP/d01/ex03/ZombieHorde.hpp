#ifndef ZOMBIE_HORDE_H_
#define ZOMBIE_HORDE_H_

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
    private:
        int num_zombies;
        Zombie* horde;
};

#endif