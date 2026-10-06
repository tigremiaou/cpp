/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:51:26 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/22 17:54:12 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Asking(std::string const &question)
{
	std::string value;
	while (value.empty())
	{
		std::cout << question;
		if (!std::getline(std::cin, value))
			exit(0);
	}
	return value;
}

int	main(void)
{
	PhoneBook pb;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
		{
			Contact c;
			c.setFirstname(Asking("First name: "));
			c.setLastname(Asking("Last name: "));
			c.setNickname(Asking("Nickname: "));
			c.setPhonenumber(Asking("Phone number: "));
			c.setDarkestsecret(Asking("Darkest secret: "));
			pb.Addcontact(c);
		}
		else if (cmd == "SEARCH")
			pb.Searchcontact();
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}