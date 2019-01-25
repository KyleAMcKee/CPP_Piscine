#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : num_zombies(n) {
    horde = new Zombie[n];
    for (int i = 0; i < num_zombies; i++)
        Zombie::announce(horde + i);
}

ZombieHorde::~ZombieHorde(void) {
    delete[] horde;
    std::cout << "Horde Destroyed" << std::endl;
}