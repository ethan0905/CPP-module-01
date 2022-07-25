/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:21 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:46:22 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int	main()
{
	Zombie *ethan = new Zombie("Ethan");

	ethan->announce();
	randomChump("Alex");

	delete ethan;
	return (0);
}
