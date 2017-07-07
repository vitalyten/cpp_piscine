/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 18:57:29 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <sstream>
# include <iomanip>

class FragTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & that);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);

	std::string makeId(unsigned int const id);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

private:
	std::string					_name;
	unsigned int const			_id;
	unsigned int				_hit_points;
	unsigned int				_energy_points;
	static unsigned int			_count;
	static unsigned int const	_max_hit_points = 100;
	static unsigned int const	_max_energy_points = 100;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = 30;
	static unsigned int const	_ranged_attack_damage = 20;
	static unsigned int const	_armor_damage_reduction = 5;
};

#endif
