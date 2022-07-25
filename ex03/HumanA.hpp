/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:28 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:29 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void );

	private:
		std::string _name;
		Weapon	&_weapon;
};

#endif
