/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:02:13 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy(int hp, std::string const & type) :  _type(type), _hp(hp) {}

Enemy::Enemy(Enemy const & that) {
	*this = that;
}

Enemy::~Enemy(void) {}

Enemy & Enemy::operator=(Enemy const & that) {
	this->_hp = that._hp;
	this->_type = that._type;
	return *this;
}

std::string const & Enemy::getType(void) const {
	return this->_type;
}

int Enemy::getHP(void) const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0) return;
	this->_hp -= damage;
	if (this->_hp < 0) this->_hp = 0;
}
