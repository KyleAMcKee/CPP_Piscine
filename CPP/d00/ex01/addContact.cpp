#include "Contact.class.hpp"

Contact add_contact(void)
{
    Contact new_contact;
    std::string buf;

    std::cout << "What is contact's first name? --> ";
    getline(std::cin, buf);
    new_contact.setFirstName(buf);
    std::cout << "What is contact's last name? --> ";
    getline(std::cin, buf);
    new_contact.setLastName(buf);
    std::cout << "What is contact's nickname? --> ";
    getline(std::cin, buf);
    new_contact.setNickname(buf);
    std::cout << "What is contact's login? --> ";
    getline(std::cin, buf);
    new_contact.setLogin(buf);
    std::cout << "What is contact's address? --> ";
    getline(std::cin, buf);
    new_contact.setAddress(buf);
    std::cout << "What is contact's email? --> ";
    getline(std::cin, buf);
    new_contact.setEmail(buf);
    std::cout << "What is contact's phone number? --> ";
    getline(std::cin, buf);
    new_contact.setPhone(buf);
    std::cout << "What is contact's birthday? --> ";
    getline(std::cin, buf);
    new_contact.setBirthday(buf);
    std::cout << "What is contact's favorite meal? --> ";
    getline(std::cin, buf);
    new_contact.setMeal(buf);
    std::cout << "What is contact's underwear color? --> ";
    getline(std::cin, buf);
    new_contact.setUnderwear(buf);
    std::cout << "What is contact's deepest secret? --> ";
    getline(std::cin, buf);
    new_contact.setSecret(buf);

    return (new_contact);
}