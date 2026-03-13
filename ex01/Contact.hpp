/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/13 12:03:09 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {

public:
	Contact(void);
	~Contact(void);
	// setters:
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkestSecret(std::string str);
	void setTimeCreated();
	void display(void);
	// getters:
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
	time_t getTimeCreated(void) const;

private:
	std::string _firstName, 
				_lastName, 
				_nickname, 
				_phoneNumber, 
				_darkestSecret;
	time_t		_timeCreated;
};

#endif
