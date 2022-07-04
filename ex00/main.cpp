#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int	main(int ac, char **av)
{
	Zombie *ethan = new Zombie("Ethan");

	ethan->announce();
	randomChump("Alex");

	delete ethan;
	return (0);
}
