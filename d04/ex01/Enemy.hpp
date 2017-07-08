/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 21:16:16 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & that);
	virtual ~Enemy(void);

	Enemy & operator=(Enemy const & that);
	std::string const & getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int);

private:
	Enemy(void);

protected:
	std::string _type;
	int _hp;
};

#endif
