/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:22 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 19:38:03 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N) {
	std::cout << "ZombieHorde created." << std::endl;
	_horde = new Zombie[this->_N];

	for (int i = 0; i < N; i++) {
		_horde[i].set_type("horde zombie");
		_horde[i].set_name(this->random_name());
		_horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] _horde;
	std::cout << "ZombieHorde destroyed." << std::endl;
}

std::string ZombieHorde::random_name(void) {

	std::string alnum = "0123456789abcdefghijklmnopqrstuvwxyz";
	std::string rname;

	for (int i = 0; i < 10; ++i) {
		rname += alnum[rand() % 36];
	}
	return rname;
}
