/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:05:37 by rlobun            #+#    #+#             */
/*   Updated: 2026/02/10 15:17:39 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	char	*p;
	if (argc > 1) {
		argv++;
		while (*argv) {
			p = *argv;
			while (*p) {
				std::cout << (char) std::toupper(*p);
				p++;
			}
			argv++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}
