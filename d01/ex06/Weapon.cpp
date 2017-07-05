/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:24:35 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 22:12:58 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type) {
	std::cout << "Weapon " << this->_type <<" created." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << this->_type << " destroyed." << std::endl;
}

std::string const & Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

