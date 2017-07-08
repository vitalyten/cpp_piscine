/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:36:58 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void) {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* b1 = new TacticalMarine;
	ISpaceMarine* b2 = new TacticalMarine;
	ISpaceMarine* b3 = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* j1 = new AssaultTerminator;
	ISpaceMarine* j2 = new AssaultTerminator;
	ISpaceMarine* j3 = new AssaultTerminator;
	ISpaceMarine* j4 = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(b1);
	vlc->push(b2);
	vlc->push(b3);
	vlc->push(jim);
	vlc->push(jim);
	vlc->push(j1);
	vlc->push(j2);
	vlc->push(j3);
	vlc->push(j4);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
