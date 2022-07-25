/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:54 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:55 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

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

	std::ofstream	outfile(filename + ".replace");
	
	if (!outfile)
	{
		std::cerr << "Error: outfile couldn't be created." << std::endl;
		return ;
	}

	size_t		i;
	std::string	line;

	while (std::getline(infile, line))
	{
		while (true)
		{
			//find the index of s1 inside line
			i = line.find(s1); 
			/*std::cout << "I found equals [" << i << "]" << std::endl;*/
		 	//check if it has finish looking for s1
			if (i == std::string::npos)
				break ;
			//go to index i inside line, insert s2, go to index i + len(s2) then remove len(s1)
			line.insert(i, s2).erase(i + s2.length(), s1.length() /*1*/);
		}
		outfile << line << std::endl;
		/*std::cout << line << std::endl;*/
	}

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
