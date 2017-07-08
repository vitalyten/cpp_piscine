/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 19:19:20 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	Victim::birth();
}

Victim::Victim(Victim const & that) {
	this->_name = that.getName();
	Victim::birth();
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

void Victim::birth(void) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs) {
	this->_name = rhs.getName();
	return *this;
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}


Victim::Victim(void) {}

std::ostream & operator<<(std::ostream & o, Victim const & victim) {
	o << "I'm " << victim.getName() << " and I like otters !" << std::endl;
	return o;
}
