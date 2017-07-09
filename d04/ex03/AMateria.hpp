/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:29 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 18:59:09 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {
public:
	AMateria(std::string const &);
	AMateria(AMateria const &);
	virtual ~AMateria(void);

	AMateria & operator=(AMateria const &);
	std::string const & getType(void) const;
	unsigned int getXP(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter&);

protected:
	std::string const _type;
	unsigned int _xp;

private:
	AMateria(void);
};

#endif
