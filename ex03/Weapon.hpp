/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:48 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:48 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {

	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		const std::string	&getType( void );
		void	setType( std::string type );

	private:
		std::string _type;
};

#endif
