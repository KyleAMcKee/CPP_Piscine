#include "HumanB.hpp"

HumanB::HumanB(std::string human_name) : name(human_name) {

}

HumanB::~HumanB() {

}

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wep) {
    this->weapon = &wep;
}

