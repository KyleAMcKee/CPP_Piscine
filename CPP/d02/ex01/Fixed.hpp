#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed(void);
        
        Fixed& operator=(Fixed const &rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int value;
        static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream &stream, Fixed const &num);

#endif