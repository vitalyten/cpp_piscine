/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 21:59:05 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	// FragTrap f1;
	// ScavTrap s1;
	// ClapTrap c1;
	// FragTrap ft0;
	// FragTrap ft27("ft27");
	// FragTrap ft28("ft28");
	// FragTrap ft29(ft0);
	// FragTrap ft1;
	// ft0 = ft27;
	// ft27.rangedAttack("tree");
	// ft27.meleeAttack("tree");
	// ft27.takeDamage(3);
	// ft27.takeDamage(30);
	// ft27.takeDamage(90);
	// ft27.beRepaired(50);
	// ft27.beRepaired(70);
	// ft27.vaulthunter_dot_exe("tree");
	// ft27.vaulthunter_dot_exe("tree");
	// ft27.vaulthunter_dot_exe("tree");
	// ft27.vaulthunter_dot_exe("tree");
	// ft27.vaulthunter_dot_exe("tree");
	// ft27.vaulthunter_dot_exe("tree");


	ScavTrap st0;
	ScavTrap st1;
	ScavTrap st27("st27");
	ScavTrap st28("st28");
	ScavTrap st29(st1);
	st0 = st27;
	st27.rangedAttack("tree");
	st27.meleeAttack("tree");
	st27.takeDamage(3);
	st27.takeDamage(30);
	st27.takeDamage(90);
	st27.beRepaired(50);
	st27.beRepaired(70);
	st27.challengeNewcomer("tree");
	st27.challengeNewcomer("tree");
	st27.challengeNewcomer("tree");
	st27.challengeNewcomer("tree");
	st27.challengeNewcomer("tree");
	st27.challengeNewcomer("tree");


	return 0;
}
