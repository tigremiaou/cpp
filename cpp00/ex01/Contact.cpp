/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:51:23 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/21 18:37:05 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) 
{
}

void Contact::setFirstname(std::string const &s)
{
	firstname = s;
}
std::string Contact::getFirstname(void) const
{
	return firstname;
}

void Contact::setLastname(std::string const &s)
{
	lastname = s;
}
std::string Contact::getLastname(void) const
{
	return lastname;
}

void Contact::setNickname(std::string const &s)
{
	nickname = s;
}
std::string Contact::getNickname(void) const
{
	return nickname;
}

void Contact::setPhonenumber(std::string const &s)
{
	phonenumber = s;
}
std::string Contact::getPhonenumber(void) const
{
	return phonenumber;
}

void Contact::setDarkestsecret(std::string const &s)
{
	darkestsecret = s;
}
std::string Contact::getDarkestsecret(void) const
{
	return darkestsecret;
}

void Contact::display(void) const
{
	std::cout << "Firstname: " << firstname << std::endl;
	std::cout << "Lastname: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phonenumber: " << phonenumber << std::endl;
	std::cout << "Darkestsecret: " << darkestsecret << std::endl;
}