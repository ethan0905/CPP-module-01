#include <iostream>
#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie *bob = new Zombie("Bobby");

	bob->announce();

	delete bob;

	return (0);
}
