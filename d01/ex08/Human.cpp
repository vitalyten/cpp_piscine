/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:57:14 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 14:42:39 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "Attacks " << target << " with sword." << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "Attacks " << target << " with bow." << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << "Screams profanities at " << target << "." << std::endl;
}


void Human::action(std::string const & action_name, std::string const & target) {
	fp actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string action_names[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++) {
		if (action_name == action_names[i])
			(this->*(actions[i]))(target);
	}
}
