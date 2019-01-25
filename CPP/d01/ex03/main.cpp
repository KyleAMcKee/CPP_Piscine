#include "ZombieHorde.hpp"

int main(void)
{
    srand(time(NULL));
    int num_of_zombies;
    std::cout << "How many zombies would you like to spawn today?" << std::endl;
    std::cin >> num_of_zombies;

    while (!std::cin || num_of_zombies <= 0)
    {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "bad input, ¯\\_(ツ)_/¯ " << "enter a numeric value above 0 " << std::endl;
        std::cin >> num_of_zombies;
    }

    ZombieHorde horde = ZombieHorde(num_of_zombies);
}