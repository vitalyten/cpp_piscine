/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:57 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 15:42:57 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const & that) : AMateria("cure") {*this = that;}

Cure::~Cure(void) {}

Cure & Cure::operator=(Cure const & that) {
	this->AMateria::operator=(that);
	return *this;
}

AMateria* Cure::clone(void) const {return new Cure(*this);}

void Cure::use(ICharacter& target) {
	this->AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
