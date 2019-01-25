#include "Contact.class.hpp"

std::string Contact::getFirstName(void)
{
    return this->first_name;
}

std::string Contact::getLastName(void)
{
    return this->last_name;
}

std::string Contact::getNickname(void)
{
    return this->nickname;
}

std::string Contact::getLogin(void)
{
    return this->login;
}

std::string Contact::getAddress(void)
{
    return this->address;
}

std::string Contact::getEmail(void)
{
    return this->email;
}

std::string Contact::getPhone(void)
{
    return this->phone;
}

std::string Contact::getBirthday(void)
{
    return this->birthday;
}

std::string Contact::getMeal(void)
{
    return this->meal;
}

std::string Contact::getUnderwear(void)
{
    return this->underwear;
}

std::string Contact::getSecret(void)
{
    return this->secret;
}

void Contact::setFirstName(std::string str)
{
    this->first_name = str;
}

void Contact::setLastName(std::string str)
{
    this->last_name = str;
}

void Contact::setNickname(std::string str)
{
    this->nickname = str;
}

void Contact::setLogin(std::string str)
{
    this->login = str;
}

void Contact::setAddress(std::string str)
{
    this->address = str;
}

void Contact::setEmail(std::string str)
{
    this->email = str;
}

void Contact::setPhone(std::string str)
{
    this->phone = str;
}

void Contact::setBirthday(std::string str)
{
    this->birthday = str;
}

void Contact::setMeal(std::string str)
{
    this->meal = str;
}

void Contact::setUnderwear(std::string str)
{
    this->underwear = str;
}

void Contact::setSecret(std::string str)
{
    this->secret = str;
}