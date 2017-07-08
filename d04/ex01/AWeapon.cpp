/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:14:28 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _damage(damage), _ap_cost(apcost) {}

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(AWeapon const & that) {
	*this = that;
}

AWeapon::~AWeapon(void) {}

AWeapon & AWeapon::operator=(AWeapon const & that) {
	this->_name = that._name;
	this->_damage = that._damage;
	this->_ap_cost = that._ap_cost;
	return *this;
}

std::string const & AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost(void) const {
	return this->_ap_cost;
}

int AWeapon::getDamage(void) const {
	return this->_damage;
}
