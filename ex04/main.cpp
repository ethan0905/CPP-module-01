#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	(void)ac;
	std::ifstream	infile;

	infile.open(av[1]);

	std::string	line;
	while (std::getline(infile, line))
		std::cout << line << std::endl;
	return (0);
}
