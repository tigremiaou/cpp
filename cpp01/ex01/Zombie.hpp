/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:10:29 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/24 21:00:27 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cctype>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

};

Zombie	*zombieHorde(int N, std::string name);

#endif