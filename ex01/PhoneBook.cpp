/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:40 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/13 13:18:52 by rlobun           ###   ########.fr       */
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
	int i = 0;
	std::string name;
	while (i < 8)
	{
		name = _contacts[i].getFirstName();
		if (name.empty())
			break ;
		i++;
	}
	return (i);
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
	_contacts[_contactsCount % 8].setFirstName(fName);
	_contacts[_contactsCount % 8].setLastName(lName);
	_contacts[_contactsCount % 8].setNickname(nickName);
	_contacts[_contactsCount % 8].setPhoneNumber(phone);
	_contacts[_contactsCount % 8].setDarkestSecret(secret);
	_contactsCount++;
	
	std::cout << std::endl;
	std::cout << ORANGE << " Congratulations! Contact added succesfully" << RESET << std::endl;
}

void PhoneBook::displayContactAtIndex(void) {
	std::string inputString;
	unsigned char c;
	int index;
	while(1) {

		std::cout << std::endl;
		std::cout << " Enter index of a contact to display: ";
		std::getline(std::cin, inputString, '\n');
		inputString = normalizeInput(inputString);
		if (inputString.empty()) {
			cppPrintError("Input empty");
			continue ;
		}
		else if (inputString.length() > 1) {
			cppPrintError("Input too long");
			continue ;
		}
		c = inputString[0];
		if (c == 'e')
			break ;
		if (c < '0' || c > '9') {
			cppPrintError("Enter an integer");
			continue ;
		}
		index = c - '0';
		if (index  < 1 || index  > this->getContactsCount())
			cppPrintError("Index out of range");
		else {	
			index = c - '0';
			std::cout << std::endl;
			std::cout << " First name:     " << _contacts[index - 1].getFirstName() << std::endl;
			std::cout << " Last name:      " << _contacts[index - 1].getLastName() << std::endl;
			std::cout << " Nickname:       " << _contacts[index - 1].getNickname() << std::endl;
			std::cout << " Phone number:   " << _contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << " Darkest secret: " << _contacts[index - 1].getDarkestSecret() << std::endl;
			break;
		}
    }
}

void PhoneBook::displayAll(void) {
	int count = this->getContactsCount();
	std::cout << std::endl;
	if (count == 0) {
		std::cout << " NO CONTACTS TO DISPLAY !" << std::endl;
		return ;
	}

	std::cout << " " << std::setfill('-') << std::setw(42);
	std::cout << "" << std::setfill(' ') << std::endl;
	int	i = 0;
	while (i < count) {
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		_contacts[i].display();;
		i++;
	}
	return ;
}
