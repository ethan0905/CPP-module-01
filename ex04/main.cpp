#include <iostream>
#include <fstream>

void	replace( std::string filename, std::string s1, std::string s2 )
{
	std::ifstream	infile;

	infile.open(av[1]);

	std::string	line;
	while (std::getline(infile, line))
		std::cout << line << std::endl;

	infile.close();
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		replace(av[1], av[2], av[3]);
	}
	else
		std::cerr << "Error: bad input." << std::endl;
	return (0);
}
