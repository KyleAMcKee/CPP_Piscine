#ifndef PONY_H_
#define PONY_H_

#include <string>
#include <iostream>

class Pony {
    public:
        Pony(bool magic, int wish, bool love);
        ~Pony(void);
        void print_attributes(void);
        void set_given_name(std::string);
        void set_pony_name(std::string);
        void set_favorite_type_of_pie(std::string);
        std::string get_given_name(void);
        std::string get_pony_name(void);
        std::string get_favorite_type_of_pie(void);
    private:
        std::string given_name;
        std::string pony_name;
        std::string favorite_type_of_pie;
        bool magic_ability;
        int number_of_wishes;
        bool ability_to_love;
};

#endif