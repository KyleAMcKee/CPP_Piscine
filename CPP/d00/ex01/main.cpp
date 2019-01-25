#include "Contact.class.hpp"

void print_instructions(void)
{
    std::cout << "~ P H O N E B O O K ~" << std::endl;
    std::cout << "Options include:" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
}

int main()
{
    std::string str;
    Contact phonebook[8];
    int contact_index = 0;
    
    print_instructions();

    while(1)
    {
        getline(std::cin, str);

        if (str == "ADD")
        {
            if (contact_index < 8)
            {
                phonebook[contact_index++] = add_contact();
                std::cout << "Contact added" << std::endl;
            }
            else
            {
                std::cout << "Maximum contacts reached, cannot add another" << std::endl;
            }
            std::cout << "What now? (ADD, SEARCH, EXIT) ";
        }
        else if (str == "SEARCH")
        {
            show_contacts(phonebook, contact_index);
            std::cout << "What do you want to do now? (ADD, SEARCH, EXIT) ";
        }
        else if (str == "EXIT")
        {
            exit(0);
        }
        else
        {
            if (str.length())
                std::cout << "Not a valid command, ya dingus. Try again: ";
        }
    }
    return 0;
}