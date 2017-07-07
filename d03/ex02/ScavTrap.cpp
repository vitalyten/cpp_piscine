/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 21:55:54 by vtenigin         ###   ########.fr       */
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
