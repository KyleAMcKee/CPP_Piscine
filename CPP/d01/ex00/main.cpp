#include "Pony.hpp"

void ponyOnTheHeap(Pony *pony)
{
    pony->set_given_name("Calvin");
    pony->set_pony_name("Falafel");
    pony->set_favorite_type_of_pie("Blueberry");

    pony->print_attributes();
}

void ponyOnTheStack(Pony &pony)
{
    pony.set_given_name("Carl");
    pony.set_pony_name("Ayosha");
    pony.set_favorite_type_of_pie("Moon pie");

    pony.print_attributes();
}

int main(void)
{
    Pony *calvin = new Pony(0, 2, 0);
    Pony carl(1, 4, 1);

    std::cout << std::endl;
    std::cout << "Pony on the H E A P" << std::endl;
    ponyOnTheHeap(calvin);

    std::cout << std::endl << "Pony on the S T A C K";
    std::cout << std::endl;
    ponyOnTheStack(carl);

    std::cout << "Kill horsie on the heap?" << std::endl;
    std::cin.get();

    delete calvin; // bye bye on the heap

    std::cout << "Kill horsie on the stack?" << std::endl;
    std::cin.get();

    return 0; // bye bye for the stack
}

