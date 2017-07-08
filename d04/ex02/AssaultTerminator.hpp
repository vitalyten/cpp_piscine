/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:27 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:58:54 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &);
	~AssaultTerminator(void);

	AssaultTerminator * clone(void) const;
	AssaultTerminator & operator=(AssaultTerminator const &);

	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};

#endif
