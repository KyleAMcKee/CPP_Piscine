#ifndef CONTACT_CLASS_H_
#define CONTACT_CLASS_H_

#include <string>
#include <iostream>

class Contact {
    public:
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickname(std::string);
        void setLogin(std::string);
        void setAddress(std::string);
        void setEmail(std::string);
        void setPhone(std::string);
        void setBirthday(std::string);
        void setMeal(std::string);
        void setUnderwear(std::string);
        void setSecret(std::string);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getLogin(void);
        std::string getAddress(void);
        std::string getEmail(void);
        std::string getPhone(void);
        std::string getBirthday(void);
        std::string getMeal(void);
        std::string getUnderwear(void);
        std::string getSecret(void);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string address;
        std::string email;
        std::string phone;
        std::string birthday;
        std::string meal;
        std::string underwear;
        std::string secret;
};

void show_contacts(Contact phonebook[], int contact_index);
Contact add_contact(void);

#endif