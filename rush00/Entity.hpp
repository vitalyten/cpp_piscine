/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:57:40 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/09 19:07:02 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP
# include <iostream>
// # include <ncurses.h>

class Entity {
public:
	static const int	ENEMY;
	static const int	PLAYER;
	static const int	OBSTACLE;
	static const int	BULLET;

	Entity(int, int, int, int, int);
	Entity(Entity const &);
	virtual ~Entity(void);

	Entity& operator=(Entity const &);

	void	collide();

	const int	type;

	int		getX( void ) const ;
	int		getY( void ) const ;
	int		getPrevX( void ) const ;
	int		getPrevY( void ) const ;
	int		getSpeed( void ) const ;
	int		getHP( void ) const ;

	void	setX( int );
	void	setY( int );
	void	setPrevX( int );
	void	setPrevY( int );
	void	setSpeed( int );
	void	setHP( int );

	void	decrHP();
	void	incrX();
	void	incrY();
	void	decrX();
	void	decrY();
	void	decrY( int );

protected:
	Entity(void);
	int _x;
	int _y;
	int _prev_x;
	int _prev_y;
	int _speed;
	int _hp;
};

#endif
