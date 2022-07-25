/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:31 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:32 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {

	std::cout << "HumanB : Constructor " << name << " called." << std::endl;
	return ;
}

HumanB::~HumanB( void ) {

	std::cout << "HumanB : Destructor " << this->_name << " called." << std::endl;
	return ;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon ) {

	this->_weapon = &weapon;
	return ;
}
