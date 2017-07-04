/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:00:15 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 16:51:27 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void) {
	ZombieEvent *ze = new ZombieEvent();
	Zombie *horde[10];
	Zombie pete = Zombie("Pete");

	pete.set_type("Zombie");
	pete.announce();
	ze->setZombieType("random");
	for (int i = 0; i < 10; i++) {
		horde[i] = ze->randomChump();
	}
	for (int i = 0; i < 10; i++) {
		delete horde[i];
	}
	delete ze;
	return 0;
}
