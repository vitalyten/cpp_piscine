/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 21:54:56 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:20:36 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const & name)
: _name(name), _ap(Character::_maxAP), _weapon(NULL) {}

Character::Character(Character const & that)
: _name(that._name), _ap(Character::_maxAP), _weapon(NULL) {}

Character::~Character(void) {}

Character & Character::operator=(Character const & that) {
	this->_name = that._name;
	this->_ap = that._ap;
	this->_weapon = that._weapon;
	return *this;
}

void Character::recoverAP(void) {
	this->_ap += 10;
	if (this->_ap > Character::_maxAP) this->_ap = Character::_maxAP;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (this->_weapon == NULL) return;
	int cost = this->_weapon->getAPCost();
	if (cost > this->_ap) return;
	this->_ap -= cost;
	std::cout << this->_name << " attacks " << enemy->getType() <<
	" with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)  delete enemy;
}

std::string const & Character::getName() const {
	return this->_name;
}
int Character::getAP(void) const {
	return this->_ap;
}

AWeapon *Character::getWeapon(void) const {
	return this->_weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & that) {
	o << that.getName() << " has " << that.getAP() << " AP and ";
	if (that.getWeapon() != NULL) o << " wields a " << that.getWeapon()->getName();
	else o << "is unarmed";
	o << std::endl;
	return o;
}
