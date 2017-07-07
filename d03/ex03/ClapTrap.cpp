/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:16:40 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

unsigned int ClapTrap::_count = 0;

std::string ClapTrap::makeId(unsigned int const id) {
	std::stringstream stream;
	stream << "0x" << std::setfill('0') << std::setw(sizeof(int) * 2) << std::hex << id;
	return stream.str();
}

std::string ClapTrap::getName(void) const {
	return this->_name;
}


ClapTrap::ClapTrap(void)
:	_id(ClapTrap::_count),
	_hit_points(ClapTrap::_max_hit_points),
	_energy_points(ClapTrap::_max_energy_points) {
	++ClapTrap::_count;
	this->_name = ClapTrap::makeId(this->_id);
	std::cout << "<CL4P-TP " << this->_name << "> Ready for action!" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
:	_name(name),
	_id(ClapTrap::_count),
	_hit_points(ClapTrap::_max_hit_points),
	_energy_points(ClapTrap::_max_energy_points) {
	std::cout << "<CL4P-TP " << this->_name << "> Ready for action!" << std::endl;
	++ClapTrap::_count;
}

ClapTrap::ClapTrap(ClapTrap const & that)
:	_id(ClapTrap::_count) {
	this->_name = that._name;
	this->_hit_points = that._hit_points,
	this->_energy_points = that._energy_points;
	std::cout << "<CL4P-TP " << this->_name << "> Ready for action!" << std::endl;
	++ClapTrap::_count;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "<CL4P-TP " << this->_name << "> I can see... the code" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "<CL4P-TP " << this->_name << "> coppied settings from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points,
	this->_energy_points = rhs._energy_points;
	return *this;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "<CL4P-TP " << this->_name << "> attacks " << target <<
	" at range, causing " << ClapTrap::_ranged_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "<CL4P-TP " << this->_name << "> punches " << target <<
	" causing " << ClapTrap::_melee_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (ClapTrap::_armor_damage_reduction >= amount) {
		std::cout << "<CL4P-TP " << this->_name << "> Why do I feel radioactive!?" << std::endl;
		return;
	}
	amount -= ClapTrap::_armor_damage_reduction;
	if (this->_hit_points < amount) {
		std::cout << "<CL4P-TP " << this->_name << "> My servos... are seizing..." << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "<CL4P-TP " << this->_name << "> received " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (ClapTrap::_max_hit_points <= this->_hit_points + amount) {
		this->_hit_points = ClapTrap::_max_hit_points;
		std::cout << "<CL4P-TP " << this->_name << "> Good as new, I think. Am I leaking?" << std::endl;
		return;
	}
	this->_hit_points += amount;
	std::cout << "<CL4P-TP " << this->_name << "> was repaired to " << this->_hit_points << " hit points."  << std::endl;
}
