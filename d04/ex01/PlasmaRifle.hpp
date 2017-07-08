/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:12:54 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 22:35:06 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & that);
	~PlasmaRifle(void);

	PlasmaRifle & operator=(PlasmaRifle const & that);

	virtual void attack() const;
private:
	static std::string const _name;
	static int const _damage = 21;
	static int const _ap_cost = 5;
};

#endif
