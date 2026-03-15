/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:40:13 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/15 12:48:28 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

int	main()
{
	std::cout << ALT_BUFFER;
	std::cout << BLINK_UNDERSCORE;
	std::string inputString;
	clearScreenANSI();
	std::cout << std::endl;
	displayHeader();
	displayMenu();
	PhoneBook	book;

	while (1)
	{
		std::cout << std::endl;
		std::cout << MAGENTA;
		std::cout << ITALIC << " Contacts currently stored in the Phonebook: ";
		std::cout << BOLD << book.getContactsCount();
		std::cout << RESET_BOLD RESET_ITALIC << std::endl;
		std::cout << RESET;
		std::cout << std::endl;
		std::cout << " Enter your command: ";
		std::getline(std::cin, inputString, '\n');
		inputString = normalizeInput(inputString);

		if (inputString.compare("ADD") == 0) {
			book.addContact();
		}
		else if (inputString.compare("SEARCH") == 0) {
			book.displayAll();
			if (book.getContactsCount() == 0)
				continue ;
			book.displayContactAtIndex();
		}
		else if (inputString.compare("EXIT") == 0)
			break ;
	}
	std::cout << RESET_CURSOR;
	std::cout << RESET DISABLE_ALT_BUFFER;
	return (0);
}
