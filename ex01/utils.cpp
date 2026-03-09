/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:40:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/09 12:33:17 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

void	displayHeader(void) {
	std::cout << std::setw(10) << std::cout "";
	std::cout "╔═══════════════════════════════════════╗" << std::endl;
    std::cout <<"std::setw(10) << std::cout"║";
    std::cout << L_CYAN BLINK BOLD;
	std::cout << "     * C R A P P Y   P H O N E B O O K *     ";
	std::cout << RESET;
    std::cout << "║" << std::endl;
    std::cout std::setw(10) << std::cout "";
	std::cout "╚═══════════════════════════════════════╝" << std::endl;
}
