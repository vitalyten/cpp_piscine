/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:53 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 15:43:57 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure(void);
	Cure(Cure const & that);
	~Cure(void);

	Cure & operator=(Cure const & that);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif
