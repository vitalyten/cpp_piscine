/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:10 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 19:22:14 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie created." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}

void Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_type(std::string t) {
	this->_type = t;
}

void Zombie::set_name(std::string n) {
	this->_name = n;
}

