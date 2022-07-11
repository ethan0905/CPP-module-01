#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harl;
		std::string str = av[1];
		
		if (str.compare("DEBUG") == 0 || str.compare("INFO") == 0 || str.compare("WARNING") == 0 || str.compare("ERROR") == 0)
			harl.complain(av[1]);
		else
			std::cerr << "Error: " << av[1] << ": invalid command." << std::endl;
	}
	else
		std::cerr << "Error: wrong number of arguments." << std::endl;

	return (0);
}
