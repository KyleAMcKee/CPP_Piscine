#ifndef BRAIN_H_
#define BRAIN_H_

#include <iostream>

class Brain {
    public:
        Brain(void);
        ~Brain(void);
        std::string identify(void);
    private:
        std::string address;
};

#endif