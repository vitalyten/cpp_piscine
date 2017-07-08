/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:18 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:29:53 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" <<  std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & that) {
	*this = that;
	std::cout << "Tactical Marine ready for battle" <<  std::endl;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." <<  std::endl;
}

TacticalMarine * TacticalMarine::clone(void) const {
	return new TacticalMarine(*this);
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & that) {
	(void)that;
	return *this;
}

void TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT !" <<  std::endl;
}

void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with bolter *" <<  std::endl;
}

void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with chainsword *" <<  std::endl;
}
