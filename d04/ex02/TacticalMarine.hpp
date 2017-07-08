/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:16 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:51:44 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &);
	~TacticalMarine(void);

	TacticalMarine * clone(void) const;
	TacticalMarine & operator=(TacticalMarine const &);

	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};

#endif
