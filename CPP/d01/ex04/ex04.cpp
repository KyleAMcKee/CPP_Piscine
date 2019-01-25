#include <iostream>

int main(void) 
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << "Print string with pointer: " << *ptr << std::endl;

    std::cout << "Print string with reference: " << ref << std::endl;

    return 0;

}