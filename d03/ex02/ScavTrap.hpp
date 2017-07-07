/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 20:06:25 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & that);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	void challengeNewcomer(std::string const & target);

private:
	static unsigned int const	_max_hit_points = 100;
	static unsigned int const	_max_energy_points = 50;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = 20;
	static unsigned int const	_ranged_attack_damage = 15;
	static unsigned int const	_armor_damage_reduction = 3;
};

#endif
