/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:44 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 15:44:04 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice(void);
	Ice(Ice const & that);
	~Ice(void);

	Ice & operator=(Ice const & that);
	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif
