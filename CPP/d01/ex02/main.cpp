#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Stack Zombie" << std::endl;
	Zombie Martha = Zombie("Martha", "Sad");

	std::cout << std::endl << "Zombie Event on Heap" << std::endl;
	ZombieEvent	*Greg = new ZombieEvent("Greg", "Happy");

	Greg->setZombieType("Chilly");

	std::cout << std::endl << "Spawning Zombie Event again with new type" << std::endl;
	Greg->newZombie("Blueberry Pie");

	Greg->setZombieType("Aquatic");

	std::cout << std::endl << "Spawning random name Zombie Event with new type" << std::endl;
	Greg->randomChump();

	std::cout << std::endl << "Another Heap zombie" << std::endl;
	Zombie *Carlito = new Zombie("Carlito", "Astronaut");

	std::cout << std::endl << "Bye Bye Zombies" << std::endl;
	delete Carlito;
	delete Greg;
	return (0);
}