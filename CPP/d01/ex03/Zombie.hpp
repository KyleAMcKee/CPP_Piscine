#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>
#include <iostream>

class Zombie {
    public:
        static void announce(Zombie *zombie);
        Zombie(void);
        ~Zombie(void);
    private:
        std::string name;
        std::string type;
};

#endif