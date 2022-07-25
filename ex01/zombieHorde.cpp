/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:47:12 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:47:13 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde ( int N, std::string name ) {
	
	if (N < 0)
		return (NULL);
	Zombie *horde = new Zombie[N];

	for ( int i = 0 ; i < N; i++)
		horde[i].setName(name);

	return (horde);
}
