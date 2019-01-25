#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>
#include <iostream>

class Zombie {
    public:
        void announce();
        Zombie(std::string, std::string);
        ~Zombie(void);
    private:
        std::string name;
        std::string type;
};

#endif