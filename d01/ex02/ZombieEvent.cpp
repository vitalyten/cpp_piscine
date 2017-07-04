/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:22 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 16:45:11 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "ZombieEvent created." << std::endl;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "ZombieEvent destroyed." << std::endl;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	zombie->set_type(this->_type);
	return zombie;
}

Zombie* ZombieEvent::randomChump(void) {
	std::string alnum = "0123456789abcdefghijklmnopqrstuvwxyz";
	std::string rname;

	for (int i = 0; i < 10; ++i) {
		rname += alnum[rand() % 36];
	}
	Zombie *zombie = new Zombie(rname);
	zombie->set_type(this->_type);
	zombie->announce();
	return zombie;
}
