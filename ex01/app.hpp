/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:13:20 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/13 11:25:48 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APP_HPP
# define APP_HPP

// COLORS

#define RESET			"\033[0m"
#define ORANGE			"\033[38;5;202m"
#define GREEN			"\033[32m"
#define RED				"\033[31m"
#define MAGENTA			"\033[35m"
#define L_CYAN			"\033[36m"

// BLINKING FONT

#define BLINK			"\033[5m"
#define RESET_BLINK		"\033[25m"

// BOLD

#define BOLD			"\033[1m"
#define RESET_BOLD		"\033[22m"

// ITALIC

#define ITALIC			"\033[3m"
#define RESET_ITALIC	"\033[23m"

// BLINKING CURSOR

#define BLINK_UNDERSCORE "\033[4 q"
#define RESET_CURSOR "\033[2 q"

// ALTERNATIVE BUFFER

#define ALT_BUFFER "\033[?1049h"
#define DISABLE_ALT_BUFFER "\033[?1049l"

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ctime>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void displayHeader(void);
void displayOption(void); 
void displayMenu(void);
void truncateStr(std::string &str);
void cppPrintError(std:: string message);
void getInput(bool& error, std::string& field, std::string message);

std::string normalizeInput(const std::string& input);
void clearScreenANSI(void);
#endif
