/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:13:20 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/09 11:12:48 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APP_HPP
# define APP_HPP

// COLORS

#define RESET		"\033[0m"
#define BLUE		"\033[34m"
#define YELLOW  	"\033[33m"
#define GREEN   	"\033[32m"
#define RED     	"\033[31m"
#define MAGENTA		"\033[35m"
#define L_CYAN		"\033[36m"

// BLINK

#define BLINK		"\033[5m"
#define RESET_BLINK	"\033[25m"

// BOLD

#define BOLD		"\033[1m"
#define RESET_BOLD	"\033[21m"

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ctime>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"

#define ALT_BUFFER "\033[?1049h"
#define DISABLE_ALT_BUFFER "\033[?1049l"

#endif
