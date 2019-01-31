#ifndef CONVERSION_H_
#define CONVERSION_H_

#include <iostream>
#include <exception>

class Conversion {
    public:
        Conversion(void);
        Conversion(std::string v);
        ~Conversion(void);
        Conversion(Conversion& other);
		Conversion &operator=(Conversion const &);

        class ConversionException : public std::exception
		{
			public:
				
				ConversionException(void);
				ConversionException(ConversionException const &obj);
				virtual ~ConversionException(void) throw();
				ConversionException &operator=(ConversionException const &r);
				virtual const char* what() const throw();
		};

        operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;

    private:
        std::string value;
};

#endif