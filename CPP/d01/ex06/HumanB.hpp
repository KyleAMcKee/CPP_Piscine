#ifndef HUMANB_H_
#define HUMANB_H_

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon& wep);
    private:
        std::string name;
        Weapon* weapon;
};

#endif