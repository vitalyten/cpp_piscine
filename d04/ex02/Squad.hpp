/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:39:05 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:34:43 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad {
public:
	Squad(void);
	Squad(Squad const &);
	~Squad(void);

	Squad & operator=(Squad const &);
	int getCount(void) const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);

private:
	int _count;
	int _size;
	ISpaceMarine **_squad;
};

#endif
