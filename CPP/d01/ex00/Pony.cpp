#include "Pony.hpp"

void Pony::print_attributes()
{
    std::cout << "Given Name: " << get_given_name() << std::endl;
    std::cout << "Pony Name: " << get_pony_name() << std::endl;
    std::cout << "Favorite type of pie: " << get_favorite_type_of_pie() << std::endl;
    std::cout << "Magic Pony? " << (this->magic_ability ? "yes" : "no") << std::endl;
    std::cout << "Number of wishes: " << this->number_of_wishes << std::endl;
    std::cout << "Can this pony love? " << ((*this).ability_to_love ? "you betcha!" : "nope :(") << std::endl;
}

Pony::Pony(bool magic, int wish, bool love=true)
{
    magic_ability = magic;
    number_of_wishes = wish;
    ability_to_love = love;
}

Pony::~Pony(void) {
    std::cout << given_name << " has been sent to the glue factory" << std::endl;
}

std::string Pony::get_pony_name(void)
{
    return this->pony_name;
}

std::string Pony::get_given_name(void)
{
    return this->given_name;
}

std::string Pony::get_favorite_type_of_pie(void)
{
    return this->favorite_type_of_pie;
}

void Pony::set_pony_name(std::string str)
{
    this->pony_name = str;
}

void Pony::set_given_name(std::string str)
{
    this->given_name = str;
}

void Pony::set_favorite_type_of_pie(std::string str)
{
    this->favorite_type_of_pie = str;
}