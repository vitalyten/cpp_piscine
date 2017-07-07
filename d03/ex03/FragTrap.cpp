/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:20:45 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
:	ClapTrap() {
	this->_hit_points = FragTrap::_max_hit_points;
	this->_energy_points = FragTrap::_max_energy_points;
	std::cout << "<FR4G-TP " << this->_name << "> Booting sequence complete." << std::endl;
}

FragTrap::FragTrap(std::string const & name)
:	ClapTrap(name) {
	this->_hit_points = FragTrap::_max_hit_points;
	this->_energy_points = FragTrap::_max_energy_points;
	std::cout << "<FR4G-TP " << this->_name << "> Booting sequence complete." << std::endl;
}

FragTrap::FragTrap(FragTrap const & that)
:	ClapTrap(that) {
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<FR4G-TP " << this->_name << "> Booting sequence complete." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "<FR4G-TP " << this->_name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "<FR4G-TP " << this->_name << "> coppied settings from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points,
	this->_energy_points = rhs._energy_points;
	return *this;
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "<FR4G-TP " << this->_name << "> attacks " << target <<
	" at range, causing " << FragTrap::_ranged_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "<FR4G-TP " << this->_name << "> punches " << target <<
	" causing " << FragTrap::_melee_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (FragTrap::_armor_damage_reduction >= amount) {
		std::cout << "<FR4G-TP " << this->_name << "> Why do I feel radioactive!?" << std::endl;
		return;
	}
	amount -= FragTrap::_armor_damage_reduction;
	if (this->_hit_points < amount) {
		std::cout << "<FR4G-TP " << this->_name << "> My servos... are seizing..." << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "<FR4G-TP " << this->_name << "> received " << amount << " points of damage." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (FragTrap::_max_hit_points <= this->_hit_points + amount) {
		this->_hit_points = FragTrap::_max_hit_points;
		std::cout << "<FR4G-TP " << this->_name << "> Good as new, I think. Am I leaking?" << std::endl;
		return;
	}
	this->_hit_points += amount;
	std::cout << "<FR4G-TP " << this->_name << "> was repaired to " << this->_hit_points << " hit points."  << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energy_points < 25) {
		std::cout << "<FR4G-TP " << this->_name << "> Crap, no more shots left!"  << std::endl;
		return;
	}
	this->_energy_points -= 25;
	std::string attacks[5] = {
		"This time it'll be awesome, I promise!",
		"Hey everybody, check out my package!",
		"Recompiling my combat code!",
		"Running the sequencer!",
		"Look out everybody, things are about to get awesome!"
	};
	std::cout << "<FR4G-TP " << this->_name << "> " << attacks[rand() % 5] << " ";
	std::cout << target << " explodes." << std::endl;
}
