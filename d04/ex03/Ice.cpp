/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:46 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 15:46:03 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const & that) : AMateria("ice") {*this = that;}

Ice::~Ice(void) {}

Ice & Ice::operator=(Ice const & that) {
	this->AMateria::operator=(that);
	return *this;
}

AMateria* Ice::clone(void) const {return new Ice(*this);}

void Ice::use(ICharacter& target) {
	this->AMateria::use(target);
	std::cout << "* shoots an ice bolt at *" << target.getName() << " *" << std::endl;
}
