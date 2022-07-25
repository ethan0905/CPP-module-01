/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:24 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:26 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	std::cout << "HumanA : Constructor " << name << " called." << std::endl;
	return ;
}

HumanA::~HumanA( void ) {

	std::cout << "HumanA : Destructor " << this->_name << " called." << std::endl;
	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
	return ;
}
