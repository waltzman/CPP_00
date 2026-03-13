/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/13 11:32:40 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void) {
	return ;
}

// **********	GETTERS	  **********

std::string Contact::getFirstName(void) const {
	return (this-> _firstName);
}

std::string Contact::getLastName(void) const {
	return (this-> _lastName);
}

std::string Contact::getNickname(void) const {
	return (this-> _nickname);
}

std::string Contact::getDarkestSecret(void) const {
	return (this-> _darkestSecret);
}

std::string Contact::getPhoneNumber(void) const {
	return (this-> _phoneNumber);

}
time_t		Contact::getTimeCreated(void) const {
	return (this-> _timeCreated);
}

// **********   SETTERS   **********

void	Contact::setFirstName(std::string s) {
	this->_firstName = s;
}

void	Contact::setLastName(std::string s) {
	this->_lastName = s;
}

void	Contact::setNickname(std::string s) {
	this->_nickname = s;
}

void	Contact::setPhoneNumber(std::string s) {
	this->_phoneNumber = s;
}

void	Contact::setDarkestSecret(std::string s) {
	this->_darkestSecret = s;
}

void	Contact::setTimeCreated(void) {
	this->_timeCreated = time(0);
}
