/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:03 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name ) : _name(name) {

	std::cout << "Zombie " << this->_name << " has been created !" << std::endl;
	return ;
}

Zombie::Zombie ( void ) {

	std::cout << "Zombie has been created !" << std::endl;
	return ;
}

Zombie::~Zombie ( void ) {

	std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::announce ( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName	( std::string name ) {

	this->_name = name;
	return ;
}
