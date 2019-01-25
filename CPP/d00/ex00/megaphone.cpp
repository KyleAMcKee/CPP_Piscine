#include <iostream>
#include <string>

void capitalize_and_print(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        std::cout << (char)toupper(str[i]);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            capitalize_and_print(argv[i]);
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}