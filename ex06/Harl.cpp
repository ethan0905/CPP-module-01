/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:48:23 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:48:24 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	
	std::cout << "Constructor has been called." << std::endl;
	return ;
}

Harl::~Harl( void ) {

	std::cout << "Destructor has been called." << std::endl;
	return ;
}

void	Harl::complain( std::string level ) {
	
	void (Harl::*lookUpTable[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*lookUpTable[i])();
			break ;
		}
	}
	return ;
}

void	Harl::debug( void ) {

	std::cout << "[DEBUG] function has been called." << std::endl;
	return ;
}

void	Harl::info( void ) {

	std::cout << "[INFO] function has been called." << std::endl;
	return ;
}

void	Harl::warning( void ) {

	std::cout << "[WARNING] function has been called." << std::endl;
	return ;
}

void	Harl::error( void ) {

	std::cout << "[ERROR] function has been called." << std::endl;
	return ;
}
