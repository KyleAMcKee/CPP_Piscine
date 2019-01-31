#include "Conversion.hpp"
#include <exception>
#include <cmath>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Must convert one and only one value at a time" << std::endl;
        return 0;
    }

    Conversion input(argv[1]);

    std::cout << "char: ";
    try {
        int value = static_cast<int>(input);
        if (value >= 33 && value <= 126) {
            std::cout << static_cast<char>(input) << std::endl;
        }
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch(Conversion::ConversionException &e) {
        std::cout << e.what() << std::endl;
    }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

    std::cout << "int: ";
    try {
        std::cout << static_cast<int>(input) << std::endl;
    }
    catch(Conversion::ConversionException &e) {
        std::cout << e.what() << std::endl;
    }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

    std::cout << "float: ";
    try {
        float v = static_cast<float>(input);
        std::cout << v;
        if (v == floor(v) && v != 1.0 / 0.0 && v != -1.0 / 0.0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch(Conversion::ConversionException &e) {
        std::cout << e.what() << std::endl;
    }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

    std::cout << "double: ";
    try {
        double v = static_cast<double>(input);
        std::cout << v;
        if (v == floor(v) && v != 1.0 / 0.0 && v != -1.0 / 0.0)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch(Conversion::ConversionException &e) {
        std::cout << e.what() << std::endl;
    }
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}