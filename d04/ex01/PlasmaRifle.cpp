/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:12:52 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:07:19 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon(PlasmaRifle::_name, PlasmaRifle::_ap_cost, PlasmaRifle::_damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & that)
: AWeapon(that) {}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & that) {
	this->AWeapon::operator=(that);
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

std::string const PlasmaRifle::_name = "Plasma Rifle";
