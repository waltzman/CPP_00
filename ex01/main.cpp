/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:40:13 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/13 11:23:06 by rlobun           ###   ########.fr       */
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
			book.displayContactAtIndex();
		}
		else if (inputString.compare("EXIT") == 0)
			break ;

		else {
			std::cout << std::endl;
			std::cout << RED << " ERROR: This command does not exist." << std::endl;
			std::cout << " Press " << BOLD << "ENTER"<< RESET_BOLD << " to continue..." << RESET;
			std::cout << "         ";
			std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n'); 
		}
	}
	std::cout << RESET_CURSOR;
	std::cout << RESET DISABLE_ALT_BUFFER;
	return (0);
}
