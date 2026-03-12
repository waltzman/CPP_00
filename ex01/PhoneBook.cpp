/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:40 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/12 12:21:56 by rlobun           ###   ########.fr       */
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

void cppPrintError(std::string message) {
	std::cout << std::endl;
	std::cout << RED BOLD;
	std::cout << " Error: " << message;
	std::cout << RESET << std::endl;
}
void getInput(bool& ok, std::string& field, std::string message) {
	std::cout << " Enter " << message << ": ";
	std::getline(std::cin, field, '\n');
	field = normalizeInput(field);
	if (field.empty()) {
		ok = false;
	}
}

void PhoneBook::addContact(void) {
	std::string fName;
	std::string lName;
	std::string phone;
	std::string nickName;
	std::string secret;
	std::string::size_type i = 0;
	//int index = 0;
	bool ok = true;

	std::cout << std::endl;
	getInput(ok, fName, "first name");
	getInput(ok, lName, "last name");
	getInput(ok, nickName, "nickname");
	getInput(ok, phone, "phone number");
	getInput(ok, secret, "darkest secret");

	if (!ok) 
	{
		cppPrintError("empty field");
		return ;
	}

	while(i < fName.size()) {
		unsigned char c = fName[i];
		if (!std::isalpha(c) && !std::isspace(c)) {
			cppPrintError("you entered non alphabetic characters in first name field");
			return ;
		}
		i++;
	}

	i = 0;
	while(i < lName.size()) {
		unsigned char c = lName[i];
		if (!std::isalpha(c) && !std::isspace(c)) {
			cppPrintError("you entered non alphabetic characters in last name field");
			return ;
		}
		i++;
	}

	i = 0;
	while (i < nickName.size())
	{
		unsigned char c = nickName[i];
		if (std::isspace(c)) {
			cppPrintError("nickname cannot contain spaces");
			return ;
		}
		i++;
	}

	i = 0;
	while (i < phone.size())
	{
		unsigned char c = phone[i];
		if (!std::isdigit(c) &&  !(c == ' ')) {
			cppPrintError("phone number field accepts only digits and space");
			return ;
		}
		i++;
	}
	
	if (_contactsCount < 8)
		this->_contactsCount++;
	}

void PhoneBook::searchContact(void) {
	return ;
}

void PhoneBook::getInfo(void) {
	return ;
}
