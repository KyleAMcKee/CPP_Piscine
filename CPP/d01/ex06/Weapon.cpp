#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) : type(weapon_type) {

}

Weapon::~Weapon (void) {
    return;
}

void Weapon::setType(std::string new_type) {
    type = new_type;
}

const std::string& Weapon::getType(void) {
    return type;
}