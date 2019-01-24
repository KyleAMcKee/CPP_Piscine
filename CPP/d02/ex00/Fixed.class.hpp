#ifndef FIXED_CLASS_HPP_
#define FIXED_CLASS_HPP_

#include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        ~Fixed(void);
        
        Fixed& operator=(Fixed const &rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int value;
        static const int fractional_bits = 8;
};

#endif