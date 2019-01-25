#include "Contact.class.hpp"

std::string truncateInput(std::string str)
{
    if (str.length() > 10)
    {
        return str.substr(0,9) + ".";
    }
    return str;
}

void display_contact(Contact phonebook[], int index)
{
    std::cout << std::endl;
    std::cout << "First Name: " << phonebook[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << phonebook[index].getLastName() << std::endl;
    std::cout << "Nickname: " << phonebook[index].getNickname() << std::endl;
    std::cout << "Login: " << phonebook[index].getLogin() << std::endl;
    std::cout << "Address: " << phonebook[index].getAddress() << std::endl;
    std::cout << "Email: " << phonebook[index].getEmail() << std::endl;
    std::cout << "Phone: " << phonebook[index].getPhone() << std::endl;
    std::cout << "Birthday: " << phonebook[index].getBirthday() << std::endl;
    std::cout << "Favorite Meal: " << phonebook[index].getMeal() << std::endl;
    std::cout << "Color of underwear: " << phonebook[index].getUnderwear() << std::endl;
    std::cout << "Deepest secret: " << phonebook[index].getSecret() << std::endl << std::endl;
}

void show_contacts(Contact phonebook[], int contact_index)
{
    int select;

    if (!contact_index)
    {
        std::cout << "No contacts in phonebook" << std::endl;
        return;
    }
    std::cout << "|  Index   |  First   |   Last   | Nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < contact_index; i++)
    {
        std::cout << "|";
        std::cout.width(10); std::cout << i << "|";
        std::cout.width(10); std::cout << truncateInput(phonebook[i].getFirstName()) << "|";
        std::cout.width(10); std::cout << truncateInput(phonebook[i].getLastName()) << "|";
        std::cout.width(10); std::cout << truncateInput(phonebook[i].getNickname()) << "|" << std::endl;
    }

    int valid_choice = contact_index - 1;
    std::cout << "Select by index " << "0 - " << valid_choice << std::endl;
    std::cin >> select;

    while (!std::cin || select > valid_choice || select < 0)
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "bad input, ¯\\_(ツ)_/¯ " << "enter a numeric value between 0 and " << valid_choice << " inclusive" << std::endl;
        std::cin >> select;
    }
    display_contact(phonebook, select);
}