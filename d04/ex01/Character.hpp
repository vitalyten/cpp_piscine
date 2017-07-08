/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 21:54:58 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 22:58:33 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
public:
	Character(std::string const & name);
	Character(Character const & that);
	~Character(void);

	Character & operator=(Character const & that);

	void recoverAP(void);
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const & getName() const;
	int getAP(void) const;
	AWeapon *getWeapon(void) const;

private:
	Character(void);

	std::string _name;
	int _ap;
	AWeapon *_weapon;

	static int const _maxAP = 40;
};

std::ostream & operator<<(std::ostream & o, Character const & that);

#endif
