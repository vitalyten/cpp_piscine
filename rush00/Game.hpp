/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:53:09 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 23:38:49 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP
# define UP 259
# define DOWN 258
# define LEFT 260
# define RIGHT 261
# define ESC 27
# define SPACE 32
# include <iostream>
# include <ncurses.h>
# include "Entity.hpp"

class Game {
public:
	Game(void);
	Game(Game const &);
	~Game(void);

	Game& operator=(Game const &);
	void addEntity(Entity*);
	void resize(void);
	void start(void);
	void end(void);
	bool draw(void);
// private:
	int _height;
	int _width;
	int _count;
	int _size;
	Entity** _entities;
};

#endif


// public:
// 	~Game(void);
// 	Game(void);
// 	Game(Game const & game);
// 	Game&operator=(Game const & game);
// 	void		gameLoop();
// 	int			refreshGame();
// 	void		checkCollision();
// 	void		initGame();
// 	int			checkGameState();
// 	void		DrawStar();
// 	void		initColors();
// 	static int	getWidth();
// 	static int	getHeight();
// 	static int	key;
// private:
// 	void	init_ncurse(int mode);
// 	Enemy	enemies[NBE];
// 	Player	player;
// 	Missile		*etoile;
// 	int			nbEtoile;
// 	static int		_Height;
// 	static int		_Width;
