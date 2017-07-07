/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 00:11:18 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
:	ClapTrap(),
	FragTrap(),
	NinjaTrap() {
	this->_hit_points = SuperTrap::_max_hit_points,
	this->_energy_points = SuperTrap::_max_energy_points;
	this->_name = SuperTrap::makeId(this->_id);
	std::cout << "<5UP3R-TP " << this->_name << "> SuperTrap created." << std::endl;
}

SuperTrap::SuperTrap(std::string const & name)
:	ClapTrap(name),
	FragTrap(name),
	NinjaTrap(name) {
	this->_hit_points = SuperTrap::_max_hit_points;
	this->_energy_points = SuperTrap::_max_energy_points;
	std::cout << "<5UP3R-TP " << this->_name << "> SuperTrap created." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & that)
:	ClapTrap(that),
	FragTrap(that),
	NinjaTrap(that) {
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<5UP3R-TP " << this->_name << "> SuperTrap created." << std::endl;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "<5UP3R-TP " << this->_name << "> SuperTrap destroyed." << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs) {
	std::cout << "<5UP3R-TP " << this->_name << "> coppied settings from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points,
	this->_energy_points = rhs._energy_points;
	return *this;
}

void SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount) {
	if (SuperTrap::_armor_damage_reduction >= amount) {
		std::cout << "<5UP3R-TP " << this->_name << "> Bite my shiny metall ass!" << std::endl;
		return;
	}
	amount -= SuperTrap::_armor_damage_reduction;
	if (this->_hit_points < amount) {
		std::cout << "<5UP3R-TP " << this->_name << "> I'll die the way I lived: annoying!" << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "<5UP3R-TP " << this->_name << "> received " << amount << " points of damage." << std::endl;
}

void SuperTrap::beRepaired(unsigned int amount) {
	if (SuperTrap::_max_hit_points <= this->_hit_points + amount) {
		this->_hit_points = SuperTrap::_max_hit_points;
		std::cout << "<5UP3R-TP " << this->_name << "> Good as new, I think." << std::endl;
		return;
	}
	this->_hit_points += amount;
	std::cout << "<5UP3R-TP " << this->_name << "> was repaired to " << this->_hit_points << " hit points."  << std::endl;
}
