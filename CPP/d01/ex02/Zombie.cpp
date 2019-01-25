#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    announce();
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " has left this world to go enjoy some ice cream" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnnnnssss...." << std::endl;
}