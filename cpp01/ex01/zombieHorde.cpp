/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:07:45 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/24 21:08:09 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string namegiven)
{
	this->name = namegiven;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
		zombies->announce();
	}
	return (zombies);
}
