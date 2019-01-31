#include "Conversion.hpp"

Conversion::Conversion(std::string v) : value(v){

}

Conversion::~Conversion(void) {

}

Conversion::Conversion(Conversion &other) 
{
	*this = other;
}

Conversion &Conversion::operator=(Conversion const &r) 
{
	this->value = r.value;
	return *this;
}

Conversion::operator char(void) const
{
	int ret = 0;

	try
	{
		ret = std::stoi(value);
	}
	catch (const std::exception &e) {
		throw ConversionException();
	}
	return static_cast<char>(ret);
	
}

Conversion::operator int(void) const
{
    int ret = 0;

	try
	{
		ret = std::stoi(value);
	}
	catch (const std::exception &e) {
		throw ConversionException();
	}
	return ret;
}

Conversion::operator float(void) const {

	float ret = 0.0;

	try {
		ret = std::stof(value);
	}
	catch (const std::exception &e) {
		throw ConversionException();
	}
	return ret;
}

Conversion::operator double(void) const {

	double ret = 0.0;

	try {
		ret = std::stod(value);
	}
	catch (const std::exception &e) {
		throw ConversionException();
	}
	return ret;
}


/* Conversion Exceptions */

Conversion::ConversionException::ConversionException(void)
{
	return;
}

Conversion::ConversionException::ConversionException(ConversionException const &other)
{
	*this = other;
	return;
}

Conversion::ConversionException::~ConversionException(void) throw()
{
	return;
}

Conversion::ConversionException &Conversion::ConversionException::operator=(ConversionException const &rhs) 
{
	(void)rhs;
	return *this;
}

const char* Conversion::ConversionException::what() const throw()
{
	return "impossible";
}