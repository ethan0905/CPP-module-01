/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:34 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:36 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon &weapon );

	private:
		std::string _name;
		Weapon	*_weapon;
};

#endif
