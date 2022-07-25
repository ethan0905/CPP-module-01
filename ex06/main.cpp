/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:48:29 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:48:30 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	getLevel(char **av)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (levels[i] == av[1])
			return (i);
	return (-1);
}

void	checkArg(char **av)
{
	Harl harl;
	std::string str = av[1];

	switch ( getLevel(av) )
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2)
		checkArg(av);
	else
		std::cerr << "Error: wrong number of arguments." << std::endl;

	return (0);
}
