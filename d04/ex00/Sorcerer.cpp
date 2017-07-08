/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 16:49:14 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & that) {
	this->_name = that.getName();
	this->_title = that.getTitle();
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title <<
	", is dead. Consequences will never be the same !" << std::endl;
}


Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}


std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}


void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

Sorcerer::Sorcerer(void) {}

std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer) {
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() <<
	", and I like ponies !" << std::endl;
	return o;
}
