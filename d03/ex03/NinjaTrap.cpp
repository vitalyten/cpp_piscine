/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:17:52 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
:	ClapTrap() {
	this->_hit_points = NinjaTrap::_max_hit_points,
	this->_energy_points = NinjaTrap::_max_energy_points;
	this->_name = NinjaTrap::makeId(this->_id);
	std::cout << "<N1NJA-TP " << this->_name << "> NinjaTrap created." << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name)
:	ClapTrap(name) {
	this->_hit_points = NinjaTrap::_max_hit_points;
	this->_energy_points = NinjaTrap::_max_energy_points;
	std::cout << "<N1NJA-TP " << this->_name << "> NinjaTrap created." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & that)
:	ClapTrap(that) {
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<N1NJA-TP " << this->_name << "> NinjaTrap created." << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "<N1NJA-TP " << this->_name << "> NinjaTrap destroyed." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
	std::cout << "<N1NJA-TP " << this->_name << "> coppied settings from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points,
	this->_energy_points = rhs._energy_points;
	return *this;
}

void NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> throws darts at " << target <<
	" causing " << NinjaTrap::_ranged_attack_damage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> cuts " << target <<
	" with sword causing " << NinjaTrap::_melee_attack_damage << " points of damage!" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount) {
	if (NinjaTrap::_armor_damage_reduction >= amount) {
		std::cout << "<N1NJA-TP " << this->_name << "> I have no armor!" << std::endl;
		return;
	}
	amount -= NinjaTrap::_armor_damage_reduction;
	if (this->_hit_points < amount) {
		std::cout << "<N1NJA-TP " << this->_name << "> Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "<N1NJA-TP " << this->_name << "> received " << amount << " points of damage." << std::endl;
}

void NinjaTrap::beRepaired(unsigned int amount) {
	if (NinjaTrap::_max_hit_points <= this->_hit_points + amount) {
		this->_hit_points = NinjaTrap::_max_hit_points;
		std::cout << "<N1NJA-TP " << this->_name << "> Good as new, I think." << std::endl;
		return;
	}
	this->_hit_points += amount;
	std::cout << "<N1NJA-TP " << this->_name << "> was repaired to " << this->_hit_points << " hit points."  << std::endl;
}


void NinjaTrap::ninjaShoebox(ClapTrap const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> uses ClapTrap " <<
	target.getName() << " as a deadly weapon." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> uses FragTrap " <<
	target.getName() << " as a deadly weapon." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> uses ScavTrap " <<
	target.getName() << " as a deadly weapon." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	std::cout << "<N1NJA-TP " << this->_name << "> uses NinjaTrap " <<
	target.getName() << " as a deadly weapon." << std::endl;
}
