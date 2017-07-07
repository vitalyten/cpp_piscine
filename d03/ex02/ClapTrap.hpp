/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 22:02:36 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <sstream>
# include <iomanip>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & that);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const & rhs);

	std::string makeId(unsigned int const id);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string					_name;
	unsigned int const			_id;
	unsigned int				_hit_points;
	unsigned int				_energy_points;
	static unsigned int			_count;
	static unsigned int const	_max_hit_points = 50;
	static unsigned int const	_max_energy_points = 50;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = 50;
	static unsigned int const	_ranged_attack_damage = 50;
	static unsigned int const	_armor_damage_reduction = 10;
};

#endif
