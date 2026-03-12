/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:27:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/12 15:46:46 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "app.hpp"

class PhoneBook
{
		int			_contactsCount;
		Contact		_contacts[8];
		std::string truncateStr(std::string &str);
	
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	displayContactAtIndex(void);
		int		getContactsCount(void);
		void	displayAll(void);
};

#endif
