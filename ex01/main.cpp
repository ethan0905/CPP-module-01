/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:56 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:46:58 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Zombie	*zombieHorde (int N, std::string name);

int	main(void)
{
	int nb = 4;
	Zombie *horde = zombieHorde( nb, "Ethan" );

	for (int i = 0; i < nb; i++)
		horde[i].announce();
		
	delete [] horde;
	return (0);
}
