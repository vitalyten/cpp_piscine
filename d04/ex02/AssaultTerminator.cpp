/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:31 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:29:23 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" <<  std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & that) {
	*this = that;
	std::cout << "* teleports from space *" <<  std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back ..." <<  std::endl;
}

AssaultTerminator * AssaultTerminator::clone(void) const {
	return new AssaultTerminator(*this);
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & that) {
	(void)that;
	return *this;
}

void AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT !" <<  std::endl;
}

void AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" <<  std::endl;
}

void AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" <<  std::endl;
}
