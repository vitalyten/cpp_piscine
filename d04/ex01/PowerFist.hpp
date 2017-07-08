/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:13:10 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 22:36:18 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist(void);
	PowerFist(PowerFist const & that);
	~PowerFist(void);

	PowerFist & operator=(PowerFist const & that);

	virtual void attack() const;
private:
	static std::string const _name;
	static int const _damage = 50;
	static int const _ap_cost = 8;
};

#endif
