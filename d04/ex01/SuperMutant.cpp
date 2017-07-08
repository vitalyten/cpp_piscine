/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:32 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 22:37:14 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"


SuperMutant::SuperMutant(void)
: Enemy(170, SuperMutant::_type) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & that)
: Enemy(that) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & that) {
	this->_hp = that._hp;
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	this->Enemy::takeDamage(damage - 3);
}

std::string const SuperMutant::_type = "Super Mutant";
