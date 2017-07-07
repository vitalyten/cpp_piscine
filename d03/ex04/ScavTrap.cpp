/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:21:27 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
:	ClapTrap() {
	this->_hit_points = ScavTrap::_max_hit_points,
	this->_energy_points = ScavTrap::_max_energy_points;
	this->_name = ScavTrap::makeId(this->_id);
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
}

ScavTrap::ScavTrap(std::string const & name)
:	ClapTrap(name) {
	this->_hit_points = ScavTrap::_max_hit_points;
	this->_energy_points = ScavTrap::_max_energy_points;
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & that)
:	ClapTrap(that) {
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "<5C4V-TP " << this->_name << "> Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "<5C4V-TP " << this->_name << "> coppied settings from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points,
	this->_energy_points = rhs._energy_points;
	return *this;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "<5C4V-TP " << this->_name << "> throws something at " << target <<
	" causing " << ScavTrap::_ranged_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "<5C4V-TP " << this->_name << "> kicks " << target <<
	" causing " << ScavTrap::_melee_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (ScavTrap::_armor_damage_reduction >= amount) {
		std::cout << "<5C4V-TP " << this->_name << "> Armor soak increased!" << std::endl;
		return;
	}
	amount -= ScavTrap::_armor_damage_reduction;
	if (this->_hit_points < amount) {
		std::cout << "<5C4V-TP " << this->_name << "> No, nononono NO!" << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "<5C4V-TP " << this->_name << "> received " << amount << " points of damage." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (ScavTrap::_max_hit_points <= this->_hit_points + amount) {
		this->_hit_points = ScavTrap::_max_hit_points;
		std::cout << "<5C4V-TP " << this->_name << "> Can I just say... yeehaw." << std::endl;
		return;
	}
	this->_hit_points += amount;
	std::cout << "<5C4V-TP " << this->_name << "> was repaired to " << this->_hit_points << " hit points."  << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	std::string attacks[5] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
	};
	std::cout << "<5C4V-TP " << this->_name << "> Issuing a challenge to " <<
	target << " : " << attacks[rand() % 5] << std::endl;
}
