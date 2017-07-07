/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/06 23:52:48 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & that);
	~NinjaTrap(void);

	NinjaTrap & operator=(NinjaTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void ninjaShoebox(ClapTrap const & target);
	void ninjaShoebox(FragTrap const & target);
	void ninjaShoebox(ScavTrap const & target);
	void ninjaShoebox(NinjaTrap const & target);

protected:
	static unsigned int const	_max_hit_points = 60;
	static unsigned int const	_max_energy_points = 120;
	static unsigned int const	_level = 1;
	static unsigned int const	_melee_attack_damage = 60;
	static unsigned int const	_ranged_attack_damage = 5;
	static unsigned int const	_armor_damage_reduction = 0;
};

#endif
