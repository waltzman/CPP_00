/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:40 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/10 16:19:22 by rlobun           ###   ########.fr       */
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

void getInput(bool& ok, std::string& field, std::string message) {
	std::cout << Enter << message << ": ");
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
	int index = 0;
	bool ok = true;

	/* if (fName.empty()) {
		std::cout << RED << "Error: empty field" << RESET << std::endl;
		return ;
	} 
	while (i < fName.size())
	{
		unsigned char c = s[i];
		if (!std::isalpha(c) && !std::isspace(c)) {
			ok = false;
			break ;
		}
		i++;
	} */ 

	getInput(ok, fName, "first name");
	getInput(ok, lName, "last name");
	getInput(ok, nickName, "nick name");
	getInput(ok, phone, "first name");
	getInput(ok, fName, "first name");
	if (!ok) {
		std::cout << RED << "Error: empty field" << RESET << std::endl;
		return ;
	}
	while(i < fName.size()) {
		unsigned char c = fName[i];
		if (!std::isalpha(c) && !std::isspace(c)) {
			std::cout << RED << "Error: you entered non alphabetic characters'" << RESET << std::endl;
			return ;
		}
		i++;
	}
	i = 0;
	while(i < lName.size()) {
		unsigned char c = lName[i];
		if (!std::isalpha(c) && !std::isspace(c)) {
			std::cout << RED << "Error: you entered non alphabetic characters'" << RESET << std::endl;
			return ;
		}
		i++;
	}
	i = 0;
	while (i < nickName.size())
	{
		unsigned char c = nickName[i]);
		if (std::isspace(c)) {
			std::cout << RED << "Error: nickname cannot contain spaces" << RESET << std::endl;
			return ;
		}
		i++;
	}
	i = 0;
	while (i < phone.size())
	{
		unsigned char c = phone[i]);
		if (!std::isdigit(c) &&  !(c == ' ')) {
			std::cout << RED << ""Error: phone number not correct" << RESET << std::endl;
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
