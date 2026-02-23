/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:27:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/02/18 13:38:31 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "app.hpp"

class PhoneBook
{
		int			_contactsCount;
		Contact*	_contacts[8];
		std::string _truncate_str(const std::string &str);
	
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
		int		getContactsCount(void);
		void	getInfo(void);
		void	exit(void);
};

#endif
