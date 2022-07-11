#include <iostream>
#include <fstream>

void	replace( std::string filename, std::string s1, std::string s2 )
{
	(void)s1;
	(void)s2;
	std::ifstream	infile(filename);

	if (!infile)
	{
		std::cerr << "Error: " << filename << ": invalid infile." << std::endl;
		return ;
	}
	if (s1.empty())
	{
		std::cerr << "Error: s1: invalid string." << std::endl;
		return ;
	}

	std::ofstream	outfile(filename + ".res");
	
	if (!outfile)
	{
		std::cerr << "Error: outfile couldn't be created." << std::endl;
		return ;
	}
	std::string	line;
	while (std::getline(infile, line))
		std::cout << line << std::endl;

	infile.close();
	outfile.close();
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
