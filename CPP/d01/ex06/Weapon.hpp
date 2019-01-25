#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>

class Weapon {
    public:
        Weapon(std::string);
        ~Weapon(void);
        void setType(std::string);
        const std::string& getType(void);
    private:
        std::string type;
};

#endif