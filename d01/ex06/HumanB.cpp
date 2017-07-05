/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:25:02 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 22:11:54 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB " << name << " created." << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << this->_name << " destroyed." << std::endl;
}


void HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB:: setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

