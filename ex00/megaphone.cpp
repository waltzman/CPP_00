/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:05:37 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/15 11:31:51 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cctype>

int	main(int argc, char **argv)
{
	std::stringstream	ss;
	if (argc > 1) {
		argv++;
		while (*argv)
			ss << *argv++;
		std::string input_string = ss.str();
		for (std::size_t i  = 0; i < input_string.size(); ++i) {
				input_string[i] =  std::toupper(static_cast<unsigned char>(input_string[i]));
			}
			std::cout << input_string;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
