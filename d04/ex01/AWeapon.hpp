/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 21:01:01 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & that);
	virtual ~AWeapon(void);

	AWeapon & operator=(AWeapon const & that);
	std::string const & getName() const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack() const = 0;
protected:
	std::string _name;
	int _damage;
	int _ap_cost;
	AWeapon(void);
};

#endif
