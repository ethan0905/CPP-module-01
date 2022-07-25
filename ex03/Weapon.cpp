/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:45 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:46 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {

	return ;
}

Weapon::Weapon( std::string type ) : _type(type) {

	return ;
}

Weapon::~Weapon( void ) {

	return ;
}

const std::string	&Weapon::getType( void ) {

	const std::string	&strRef = this->_type;

	return (strRef);
}

void	Weapon::setType( std::string type ) {

	this->_type = type;
	return ;
}
