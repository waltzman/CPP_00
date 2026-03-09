/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:40:13 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/09 12:10:12 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

void clearScreenANSI() {
    std::cout << "\033[2J\033[1;1H";
}

std::string normalizeInput(const std::string& input)
{
    std::stringstream ss(input);
    std::string word;
    std::string result;
    bool first = true;

    while (ss >> word) // automatically skips all whitespace
    {
        if (!first)
            result += "  "; // exactly 2 spaces

        result += word;
        first = false;
    }

    return result;
}


void displayMainMenu(void) {
	displayHeader();
    std::cout << std::endl;
    std::cout << "     Enter one of commands available:" << std::endl;
    std::cout << std::endl;
    std::cout << "    " << BOLD <<" ADD "<< RESET << "    -  add contact" << std::endl;
    std::cout << "    " << BOLD <<" SEARCH" << RESET << "  -  search contact" << std::endl;
    std::cout << "    " << BOLD <<" EXIT" << RESET <<  "    -  quit the Crappy Phonebook" << std::endl;
}

int	main()
{
	PhoneBook	book;
	std::string inputString;
	inputString = "";
	while (1)
	{
		clearScreenANSI();
		displayMainMenu();
		std::cout << " Contacts currently stored in the Phonebook: " << book.getContactsCount() << std::endl; 
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << " Enter your command: "; 
		std::cin.clear();
		std::getline(std::cin, inputString);
		if (inputString.compare("ADD") == 0) {
			book.addContact();
		}
		else if (inputString.compare("SEARCH") == 0) {
			book.getInfo();
		}
		else if (inputString.compare("EXIT") == 0) {
			std::cout << " Exiting...   Goodbye! " << std::endl;
			//clearScreenANSI();
			break ;
		}
		else {	
			std::cout << RED << " This command does not exist." << RESET << std::endl;
			std::cout << GREEN << " Press ENTER to continue..." << RESET << std::endl;
			std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n'); 
			clearScreenANSI();
		}
	}
	return (0);
}
