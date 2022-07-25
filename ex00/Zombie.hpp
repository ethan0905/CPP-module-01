/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:37 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:46:37 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

	public:
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
//		Zombie	*newZombie( std::string name );
//		void	randomChump( std::string name );

	private:
		std::string _name;
};

#endif
