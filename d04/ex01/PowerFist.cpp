/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:13:07 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:07:39 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
: AWeapon(PowerFist::_name, PowerFist::_ap_cost, PowerFist::_damage) {}

PowerFist::PowerFist(PowerFist const & that)
: AWeapon(that) {}

PowerFist::~PowerFist(void) {}

PowerFist & PowerFist::operator=(PowerFist const & that) {
	this->AWeapon::operator=(that);
	return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

std::string const PowerFist::_name = "Power Fist";
