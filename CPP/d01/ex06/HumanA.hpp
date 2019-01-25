#ifndef HUMANA_H_
#define HUMANA_H_

#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack(void);
    private:
        std::string name;
        Weapon& weapon;
};

#endif