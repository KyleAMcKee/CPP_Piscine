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

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
        
        Fixed& operator=(Fixed const &rhs);

        bool operator>(const Fixed& rhs);
        bool operator<(const Fixed& rhs);
        bool operator>=(Fixed const &rhs);
        bool operator<=(Fixed const &rhs);
        bool operator==(Fixed const &rhs);
        bool operator!=(Fixed const &rhs);

        Fixed operator+(Fixed const &rhs);
        Fixed operator-(Fixed const &rhs);
        Fixed operator*(Fixed const &rhs);
        Fixed operator/(Fixed const &rhs);

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed& one, Fixed& two);
        static const Fixed& min(const Fixed& one, const Fixed& two);
        static Fixed& max(Fixed& one, Fixed& two);
        static const Fixed& max(const Fixed& one, const Fixed& two);

    private:
        int value;
        static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream &stream, Fixed const &num);

#endif