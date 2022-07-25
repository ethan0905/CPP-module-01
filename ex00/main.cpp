#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int	main()
{
	Zombie *ethan = new Zombie("Ethan");

	ethan->announce();
	randomChump("Alex");

	delete ethan;
	return (0);
}
