/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:40 by rlobun            #+#    #+#             */
/*   Updated: 2026/02/18 15:56:42 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

PhoneBook::PhoneBook(void) {
	_contactsCount = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int PhoneBook::getContactsCount(void) {
	return this->_contactsCount;
}

void PhoneBook::addContact(void) {
	// m_creationTime = std::time(NULL); This will get creation time
	this->_contactsCount++;
	}

void PhoneBook::searchContact(void) {
	return ;
}

void PhoneBook::getInfo(void) {
	return ;
}
