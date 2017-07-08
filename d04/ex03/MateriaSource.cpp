/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:43:25 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 16:13:44 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _count(0) {}

MateriaSource::MateriaSource(MateriaSource const & that) : _count(0) {*this = that;}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < this->_count; ++i) {
		delete this->_source[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource & const that) {
	for (int i = 0; i < this->_count; ++i) {
		delete this->_source[i];
	}
	for (int i = 0; i < that._count; ++i) {
		this->_source[i] = that._source[i].clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (this->_count == MateriaSource::_maxCount) return;
	this->_source[this->_count] = materia;
	++this->_count;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->_count; ++i) {
		if (this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	}
	return NULL;
}
