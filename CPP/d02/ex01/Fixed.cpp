#include "Fixed.hpp"
#include <bitset>

Fixed::Fixed(void) : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(n << fractional_bits);
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(n * (1 << fractional_bits)));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called ";
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat(void) const {
    return ((float)value / (1 << fractional_bits));
}

int Fixed::toInt(void) const {
    return (int)(value >> fractional_bits);
}

std::ostream& operator<<(std::ostream& stream, Fixed const& num) {
    stream << num.toFloat();
    return stream;
}