/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:40:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/10 13:07:16 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

void	displayHeader(void) {
	std::cout << L_CYAN;
	std::cout << "╔═══════════════════════════════════════╗" << std::endl;
    std::cout << "║                                       ║" << std::endl;
    std::cout << "║                                       ║" << std::endl;
    std::cout << "║";
    std::cout << BLINK BOLD;
	std::cout << "  * C R A P P Y   P H O N E B O O K *  ";
	std::cout << RESET_BLINK << RESET_BOLD;
    std::cout << "║" << std::endl;
    std::cout << "║                                       ║" << std::endl;
    std::cout << "║                                       ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════╝" << RESET; 
	std::cout << std::endl;
}

void	displayOption(std::string command, std::string description) {
	std::cout << BOLD << std::left << std::setw(8) << command << RESET_BOLD;
	std::cout << "-  ";
	std::cout << description << std::endl;
}

void displayMenu(void) {
    std::cout << std::endl;
	std::cout << GREEN;
    std::cout << " Enter one of commands available:" << std::endl;
	std::cout << RESET;
    std::cout << std::endl;
    displayOption(" ADD", "add contact");
    displayOption(" SEARCH", "search contact");
    displayOption(" EXIT", "quit the Crappy Phonebook");
    std::cout << std::endl;
}

void clearScreenANSI() {
    std::cout << "\033[2J\033[1;1H";
}

std::string normalizeInput(const std::string& input)
{
    std::stringstream ss(input);
    std::string word;
    std::string result;
    bool first = true;

    while (ss >> word)           // skip whitespaces
    {
        if (!first)
            result += " ";

        result += word;
        first = false;
    }

    return result;
}

