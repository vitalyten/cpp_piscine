/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 19:00:18 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <sstream>
# include <iomanip>

class ScavTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & that);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	std::string makeId(unsigned int const id);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);

private:
	std::string					_name;
	unsigned int const			_id;
	unsigned int				_hit_points;
	unsigned int				_energy_points;
	static unsigned int			_count;
	static unsigned int const	_max_hit_points = 100;
	static unsigned int const	_max_energy_points = 50;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = 20;
	static unsigned int const	_ranged_attack_damage = 15;
	static unsigned int const	_armor_damage_reduction = 3;
};

#endif
