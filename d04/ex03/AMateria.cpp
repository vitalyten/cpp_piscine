/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 15:16:13 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & that) {*this = that;}

AMateria::~AMateria(void) {}

AMateria & AMateria::operator=(AMateria const & that) {
	this->_xp = that._xp;
	return *this;
}

std::string const & AMateria::getType(void) const {return this->_type;}

unsigned int AMateria::getXP(void) const {return this->_xp;}

void AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}

AMateria::AMateria(void) {}
