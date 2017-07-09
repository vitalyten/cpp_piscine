/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:57:40 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 23:51:47 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP
# include <iostream>
// # include <ncurses.h>

class Entity {
public:
	Entity(void);
	Entity(int, int, int, int, int);
	Entity(Entity const &);
	virtual ~Entity(void);

	Entity& operator=(Entity const &);
	void draw(void);
// private:
	int _x;
	int _y;
	int _prev_x;
	int _prev_y;
	int _height;
	int _width;
	int _spead;
	int _hp;

	bool _visible;
	bool _player;
};

#endif
