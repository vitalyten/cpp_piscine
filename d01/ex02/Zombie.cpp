/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:10 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 16:19:52 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : _name(n) {
	std::cout << "Zombie " << this->_name << " created." << std::endl;
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

