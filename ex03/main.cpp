#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
//		std::cout << club.getType() << std::endl;
		club.setType("some other type of club");
//		std::cout << club.getType() << std::endl;
		bob.attack();
	}
	{
//		Weapon club = Weapon("crude spiked club");
//		HumanB jim("Jim");
//		jim.setWeapon(club);
//		jim.attack();
//		std::cout << club.getType() << std::endl;
//		club.setType("some other type of club");
//		std::cout << club.getType() << std::endl;
//		jim.attack();
	}

	return (0);
}
