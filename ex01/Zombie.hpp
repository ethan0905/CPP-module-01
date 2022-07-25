/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:09 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
		void	setName( std::string name );

	private:
		std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
