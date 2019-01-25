#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int n) {
    // std::cout << "Int constructor called" << std::endl;
    setRawBits(n << fractional_bits);
}

Fixed::Fixed(const float n) {
    // std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(n * (1 << fractional_bits)));
}

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called ";
    // std::cout << "bit representation: " << std::bitset<32>(value) << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float Fixed::toFloat(void) const {
    return ((float)value / (1 << fractional_bits));
}

int Fixed::toInt(void) const {
    return (int)(value >> fractional_bits);
}

/* Comparison Operators */

bool Fixed::operator>(const Fixed& rhs) {
    return value > rhs.value;
}

bool Fixed::operator<(const Fixed& rhs) {
    return value < rhs.value;
}

bool Fixed::operator>=(Fixed const &rhs) {
    return value >= rhs.value;
}

bool Fixed::operator<=(Fixed const &rhs) {
    return value <= rhs.value;
}

bool Fixed::operator==(Fixed const &rhs) {
    return value == rhs.value;
}

bool Fixed::operator!=(Fixed const &rhs) {
    return value != rhs.value;
}

/* Arithmetic Operators */

Fixed Fixed::operator+(Fixed const &rhs) {
    return toFloat() + rhs.toFloat();
}

Fixed Fixed::operator-(Fixed const &rhs) {
    return toFloat() - rhs.toFloat();
}

Fixed Fixed::operator*(Fixed const &rhs) {
    return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const &rhs) {
    if (rhs.toFloat() == 0) {
        std::cout << "Divide by zero error, returning 0" << std::endl;
        return Fixed(0);
    }
    return this->toFloat() / rhs.toFloat();
}

/* Increment / Decrement */

Fixed &Fixed::operator++(void) {
    value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed const old(*this);
    ++(*this);
    return old;
}

Fixed &Fixed::operator--(void) {
    value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed const old(*this);
    --(*this);
    return old;
}

/* Min / max functions */

Fixed& Fixed::min(Fixed& one, Fixed& two) {
    return one < two ? one : two;
}
const Fixed& Fixed::min(const Fixed& one, const Fixed& two) {
    return one.value < two.value ? one : two;
}
Fixed& Fixed::max(Fixed& one, Fixed& two) {
    return one > two ? one : two;
}
const Fixed& Fixed::max(const Fixed& one, const Fixed& two) {
    return one.value > two.value ? one : two;
}

std::ostream& operator<<(std::ostream& stream, Fixed const& num) {
    stream << num.toFloat();
    return stream;
}