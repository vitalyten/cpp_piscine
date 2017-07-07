/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 19:29:36 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int ScavTrap::_count = 0;

std::string ScavTrap::makeId(unsigned int const id) {
	std::stringstream stream;
	stream << "0x" << std::setfill('0') << std::setw(sizeof(int) * 2) << std::hex << id;
	return stream.str();
}



ScavTrap::ScavTrap(void)
:	_id(ScavTrap::_count),
	_hit_points(ScavTrap::_max_hit_points),
	_energy_points(ScavTrap::_max_energy_points) {
	++ScavTrap::_count;
	this->_name = ScavTrap::makeId(this->_id);
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
}

ScavTrap::ScavTrap(std::string const & name)
:	_name(name),
	_id(ScavTrap::_count),
	_hit_points(ScavTrap::_max_hit_points),
	_energy_points(ScavTrap::_max_energy_points) {
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
	++ScavTrap::_count;
}

ScavTrap::ScavTrap(ScavTrap const & that)
:	_id(ScavTrap::_count) {
	this->_name = that._name;
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<5C4V-TP " << this->_name << "> Hello! I am your new steward bot." << std::endl;
	++ScavTrap::_count;
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
