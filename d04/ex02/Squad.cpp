/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:08 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:30:35 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _size(2) {
	this->_squad = new ISpaceMarine*[this->_size];
}

Squad::Squad(Squad const & that) {
	*this = that;
}

Squad::~Squad(void) {
	for (int i = 0; i < this->_count; ++i) {
		delete this->_squad[i];
	}
}

Squad & Squad::operator=(Squad const & that) {
	for (int i = 0; i < this->_count; ++i) {
		delete this->_squad[i];
	}
	delete this->_squad;
	this->_count = that._count;
	this->_size = that._size;
	this->_squad = new ISpaceMarine*[this->_size];
	for (int i = 0; i < this->_count; ++i) {
		this->_squad[i] = that._squad[i]->clone();
	}
	return *this;
}

int Squad::getCount(void) const {
	return this->_count;
}

ISpaceMarine* Squad::getUnit(int i) const {
	if (i < 0 || i >= this->_count) return NULL;
	return this->_squad[i];
}

int Squad::push(ISpaceMarine* marine) {
	if (marine == NULL) return this->_count;
	for (int i = 0; i < this->_count; ++i) {
		if (marine == this->_squad[i]) return this->_count;
	}
	if (this->_count == this->_size) {
		ISpaceMarine** tmp = new ISpaceMarine*[this->_size * 2];
		for (int i = 0; i < this->_count; ++i) {
			tmp[i] = this->_squad[i];
		}
		delete this->_squad;
		this->_squad = tmp;
	}
	this->_squad[this->_count] = marine;
	++this->_count;
	this->_size *= 2;
	return this->_count;
}
