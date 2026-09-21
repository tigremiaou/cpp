/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:54 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/21 18:36:35 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string trunc(std::string const &s)
{
	if (s.size() >= 10)
		return s.substr(0, 9) + ".";
	return s;
}

PhoneBook::PhoneBook(void) : count(0)
{
}

void PhoneBook::Addcontact(Contact const &c)
{
	contacts[count % 8] = c;
	count++;
}

void PhoneBook::Searchcontact(void) const 
{
	int total = count;
	if (total > 8)
		total = 8;
	for (int i = 0; i < total; i++)
		std::cout
		<< std::setw(10) << (i + 1) << "|"
		<< std::setw(10) << trunc(contacts[i].getFirstname()) << "|"
		<< std::setw(10) << trunc(contacts[i].getLastname()) << "|"
		<< std::setw(10) << trunc(contacts[i].getNickname()) << "|"
		<< std::endl;
	std::string input;
	std:: cout << "Type an index: ";
	std:: getline(std::cin, input);
	int index = std::atoi(input.c_str());
	if (index < 1 || index > total){
		std::cout << "Index invalid" << std::endl;
		return;
	}
	contacts[index - 1].display();
}
