/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:43:13 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 18:24:07 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const & name) : _name(name), _count(0) {}

Character::Character(Character const & that) : _count(0) {*this = that;}

Character::~Character(void) {
	for (int i = 0; i < this->_count; ++i) {
		delete this->_inventory[i];
	}
}


Character & Character::operator=(Character const & that) {
	this->_name = that._name;
	for (int i = 0; i < this->_count; ++i) {
		delete this->_inventory[i];
	}
	for (int i = 0; i < that._count; ++i) {
		this->_inventory[i] = that._inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName(void) const {return this->_name;}

void Character::equip(AMateria* m) {
	if (this->_count == this->_maxCount) return;
	this->_inventory[this->_count] = m;
	++this->_count;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= this->_count) return;
	this->_inventory[idx] = NULL;
	while (idx < this->_count - 1) {
		this->_inventory[idx] = this->_inventory[idx + 1];
		++idx;
	}
	this->_inventory[idx] = NULL;
	--this->_count;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= this->_count) return;
	this->_inventory[idx]->use(target);
}
