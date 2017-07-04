/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:10:38 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/03 22:20:16 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

int Phonebook::inst_code(std::string str) const {
	if (str == "EXIT") return (0);
	if (str == "ADD") return (1);
	if (str == "SEARCH") return (2);
	return (-1);
}

bool Phonebook::isfull(void) const {
	return (Phonebook::_count == 8);
}

bool Phonebook::isempty(void) const {
	return (Phonebook::_count == 0);
}

void Phonebook::print_field(std::string str) {
	int len = str.length();
	if (len > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << str[i];
		}
		std::cout << ".";
	} else {
		for (int i = 0; i < 10 - len; i++) {
			std::cout << " ";
		}
		std::cout << str;
	}
}

void Phonebook::print_contacts(void) {
	std::cout << "    index | first name |  last name |   nickname" << std::endl;
	for (int i = 0; i < Phonebook::_count; i++) {
		std::cout << "        " << i << " | ";
		this->print_field(this->contacts[i].get_first_name());
		std::cout << " | ";
		this->print_field(this->contacts[i].get_last_name());
		std::cout << " | ";
		this->print_field(this->contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void Phonebook::print_contact(int i) {
	if (Phonebook::_count == 0 || i < 0 || i > Phonebook::_count - 1) {
		std::cout << "wrong index" << std::endl;
		return;
	}

	std::cout << "first_name:      " << this->contacts[i].get_first_name() << std::endl;
	std::cout << "last_name:       " << this->contacts[i].get_last_name() << std::endl;
	std::cout << "nickname:        " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "login:           " << this->contacts[i].get_login() << std::endl;
	std::cout << "postal_address:  " << this->contacts[i].get_postal_address() << std::endl;
	std::cout << "email_address:   " << this->contacts[i].get_email_address() << std::endl;
	std::cout << "phone_number:    " << this->contacts[i].get_phone_number() << std::endl;
	std::cout << "birthday_date:   " << this->contacts[i].get_birthday_date() << std::endl;
	std::cout << "favorite_meal:   " << this->contacts[i].get_favorite_meal() << std::endl;
	std::cout << "underwear_color: " << this->contacts[i].get_underwear_color() << std::endl;
	std::cout << "darkest_secret:  " << this->contacts[i].get_darkest_secret() << std::endl;
}


void Phonebook::add_contact(void) {
	Contact contact;
	std::string str;

	std::cout << "first_name: ";
	std::cin >> str;
	contact.set_first_name(str);

	std::cout << "last_name: ";
	std::cin >> str;
	contact.set_last_name(str);

	std::cout << "nickname: ";
	std::cin >> str;
	contact.set_nickname(str);

	std::cout << "login: ";
	std::cin >> str;
	contact.set_login(str);

	std::cout << "postal_address: ";
	std::cin >> str;
	contact.set_postal_address(str);

	std::cout << "email_address: ";
	std::cin >> str;
	contact.set_email_address(str);

	std::cout << "phone_number: ";
	std::cin >> str;
	contact.set_phone_number(str);

	std::cout << "birthday_date: ";
	std::cin >> str;
	contact.set_birthday_date(str);

	std::cout << "favorite_meal: ";
	std::cin >> str;
	contact.set_favorite_meal(str);

	std::cout << "underwear_color: ";
	std::cin >> str;
	contact.set_underwear_color(str);

	std::cout << "darkest_secret: ";
	std::cin >> str;
	contact.set_darkest_secret(str);

	this->contacts[Phonebook::_count] = contact;
	Phonebook::_count++;
	std::cout << "contact added" << std::endl;
}

int Phonebook::_count = 0;
