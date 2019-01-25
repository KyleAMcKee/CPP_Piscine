#ifndef HUMAN_H_
#define HUMAN_H_

#include <iostream>
#include "Brain.hpp"

class Human {
    public:
        Human(void);
        ~Human(void);
        std::string identify(void);
        Brain& getBrain(void);
    private:
        Brain brain;
};

#endif