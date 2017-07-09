/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:43:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 18:44:50 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character(std::string const &);
	Character(Character const &);
	~Character(void);

	Character & operator=(Character const &);
	std::string const & getName(void) const;
	void equip(AMateria*);
	void unequip(int);
	void use(int idx, ICharacter&);

private:
	std::string _name;
	AMateria* _inventory[4];
	int _count;
	static int const _maxCount = 4;
	Character(void);
};

#endif
