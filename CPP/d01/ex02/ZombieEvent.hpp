#ifndef ZOMBIEEVENT_HPP_
#define ZOMBIEEVENT_HPP_

#include "Zombie.hpp"
#include <string>

class ZombieEvent {
    public:
        ZombieEvent(std::string, std::string);
        ~ZombieEvent(void);
        Zombie* newZombie(std::string);
        void setZombieType(std::string type);
        Zombie* randomChump(void);
    private:
        std::string type;
};

#endif