#include <iostream>

struct Data{
    std::string s1;
	int n;
	std::string s2;
};

void *serialize(void){
	char randChar[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char randNumber[11] = "0123456789";
	char *ret = new char[18];

	for (int i = 0; i < 8; i++)
		ret[i] = randChar[rand() % 52];
	ret[8] = randNumber[rand() % 10];
	for (int i = 9; i < 17; i++)
		ret[i] = randChar[rand() % 52];
	ret[21] = '\0';

	std::cout << std::endl << "8 random characters: ";
	for (int i = 0; i < 8; i++)
		std::cout << ret[i];
	std::cout << std::endl << "An int: ";
	std::cout << ret[8];
	std::cout << std::endl << "8 random characters: ";
	for (int i = 9; i < 17; i++)
		std::cout << ret[i];
	std::cout << std::endl;
	return reinterpret_cast<void*>(ret);
}

Data *deserialize(void *raw){
	Data *ret = new Data;
	char *inter = reinterpret_cast<char*>(raw);

	for (int i = 0; i < 8; i++)
		ret->s1 += inter[i];
    ret->n = inter[8] - '0';
	for (int i = 0; i < 8; i++)
		ret->s2 += inter[i + 9];
	return ret;
}

int main(void){
	srand(time(0));
	void	*test = serialize();
	Data	*test2 = deserialize(test);

	std::cout << std::endl << "At Address: " << test << std::endl;
	std::cout << std::endl << "Checking deserialization... beep boop beep boop" << std::endl;
	std::cout << test2->s1 << std::endl << test2->n << std::endl << test2->s2 << std::endl;
    std::cout << std::endl;

	delete	test2;
	return (0);
}