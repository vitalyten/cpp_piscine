/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:47:31 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const & that);
	~SuperTrap(void);

	SuperTrap & operator=(SuperTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	static unsigned int const	_max_hit_points = FragTrap::_max_hit_points;
	static unsigned int const	_max_energy_points = NinjaTrap::_max_energy_points;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	static unsigned int const	_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	static unsigned int const	_armor_damage_reduction = FragTrap::_armor_damage_reduction;
};

#endif
