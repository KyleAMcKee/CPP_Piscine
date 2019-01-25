#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::string names[] = {"Dolores", "Magmar", "Turkey", "Smelly", "Tigger", "Stan"};

    this->name = names[rand() % 6];
    this->type = "Hoarders";
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " has left this world to go enjoy some ice cream" << std::endl;
}

void Zombie::announce(Zombie *zombie)
{
    std::cout << "<" << zombie->name << " (" << zombie->type << ")> " << "Braiiiiiiinnnnnnssss...." << std::endl;
}