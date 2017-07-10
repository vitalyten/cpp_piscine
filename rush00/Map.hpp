/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:22:03 by ofedorov          #+#    #+#             */
/*   Updated: 2017/07/09 22:59:26 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
# define MAP_HPP

# include "Entity.hpp"
// render map on the screen here?

#define BUFFER_HEIGHT 5
#define FRAMES_OBSTACLE 15
#define FRAMES_ENEMY 5

class Map
{
private:
	Map( void );
	Entity		***_map;
	int			_frames; // current frames
	const int	_height;
	const int	_width;
	int			_score;
	Map( Map const &map );

public:
	Map( int, int );
	~Map( void );
	Map & operator=( Map const &map );
	Entity *getEntity( int, int );
	void	addEntity( Entity* );
	void	update( void ); // receive key to move / shoot ?
	void	moveEntity( Entity *, int, int );
	void	collide( Entity*, Entity* );
	void	render( void );
	int		getFrames( void );
	int		getScore( void );
	bool	notGameOver( void );
	void	deleteEntity(Entity*);
	void	createEntities( void );
	void	enemyMissile(Entity*);
	Entity		*player;
};

#endif
