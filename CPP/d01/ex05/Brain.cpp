#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {

}

Brain::~Brain(void) {

}

std::string Brain::identify(void) {
    std::stringstream stream;
    std::string str;

    stream << this;
    stream >> str;
    return str;
}