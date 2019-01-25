#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
    this->type = type;
    newZombie(name);
}

ZombieEvent::~ZombieEvent(void)
{
    std::cout << "Zombie Event " << "<" << this->type << ">" << " has ended" << std::endl;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
    std::cout << "Setting zombie type to " << this->type << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string n)
{
    Zombie* freshZombie = new Zombie(n, this->type);
    return freshZombie;
}

Zombie* ZombieEvent::randomChump(void)
{
    srand(time(NULL));
    int i = rand() % 5;
    std::string names[] = {"Dolores", "Magmar", "Turkey", "Smelly", "Tigger"};

    Zombie *freshZombie = new Zombie(names[i], this->type);
    return freshZombie;
}