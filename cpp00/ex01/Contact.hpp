/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:49:42 by nmeunier          #+#    #+#             */
/*   Updated: 2026/09/21 18:25:47 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cctype>

class Contact {
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	public:
		Contact(void);
		void	setFirstname(std::string const &s);
		std::string getFirstname(void) const;

		void	setLastname(std::string const &s);
		std::string getLastname(void) const;

		void	setNickname(std::string const &s);
		std::string getNickname(void) const;

		void	setPhonenumber(std::string const &s);
		std::string getPhonenumber(void) const;

		void	setDarkestsecret(std::string const &s);
		std::string getDarkestsecret(void) const;
		
		void	display(void) const;
};

#endif