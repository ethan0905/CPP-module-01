#include "Zombie.hpp"

//Zombie	*zombieHorde (int N, std::string name);

int	main(void)
{
	int nb = 4;
	Zombie *horde = zombieHorde( nb, "Ethan" );

	for (int i = 0; i < nb; i++)
		horde[i].announce();
		
	delete [] horde;
	return (0);
}
