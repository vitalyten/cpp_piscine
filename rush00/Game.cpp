/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:53:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/09 23:27:27 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include "Entity.hpp"
#include <ncurses.h>

bool Game::getInput(void) {
	int key;
	Entity* player = this->_map->player;
	int x = player->getX();
	int y = player->getY();
	if ((key = wgetch(stdscr)) == ESC) return false;
	if (key == KEY_RESIZE) return false;
	if (key == UP && y > BUFFER_HEIGHT) this->_map->moveEntity(player, 0, -1);
	if (key == DOWN && y < this->_height + BUFFER_HEIGHT - 2) this->_map->moveEntity(player, 0, 1);
	if (key == LEFT && x > 0)  this->_map->moveEntity(player, -1, 0);
	if (key == RIGHT && x < this->_width - 1)  this->_map->moveEntity(player, 1, 0);
	if (key == SPACE) {
		Entity *missile = new Entity(player->getX(), player->getY() - 1, 1, -1, Entity::BULLET);
		this->_map->addEntity(missile);
	}
	// this->_map->movePlayer(player);
	return true;
}


bool Game::drawHeader(void) {
	int lives = this->_map->player->getHP();
	time_t	now;
	time(&now);
	time_t diff = now - this->_start_time;
	mvprintw(0, 0, "Frames: %4d   Time:%02d:%02d   Score: %05d   Lives:%c%c%c", this->_map->getFrames(), diff / 60, diff % 60,
																this->_map->getScore(),
																lives == 3 ? 'o': ' ', lives >= 2 ? 'o': ' ', lives >= 1 ? 'o': ' ');
	// mvprintw(0, 0, "%d", this->_map->getFrames());

	// for (int i = 0; i < this->_count; ++i) {
	//
	// 	entity = this->_entities[i];
	// 	if (entity->getPlayer()) player = entity;
	// 	entity->decrY(entity->getSpead());
	// 	attron(COLOR_PAIR(1));
	// 	mvprintw(entity->getPrevY(), entity->getPrevX(), "%c", ' ');
	// 	if (entity->getPlayer()) mvprintw(entity->getY(), entity->getX(), "%c", 'A');
	// 	if (!entity->getPlayer()) {
	// 		attron(COLOR_PAIR(2));
	// 		mvprintw(entity->getY(), entity->getX(), "%c", '|');
	// 	}
	// 	entity->setPrevX(entity->getX());
	// 	entity->setPrevY(entity->getY());
	// }


	// refresh();
	napms(20);

	return true;
}

void Game::start(void) {
	std::srand(std::time(nullptr));
	time(&(this->_start_time));
	// this->_start_time = clock();
	WINDOW* window = initscr();
	// (void)window;
	// noecho();
	curs_set(0); // ?
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);

	start_color();

	init_color(12, 360, 600, 680); // light blue-gray
	init_color(13, 860, 1000, 600); // light green-yellow (missile)
	init_color(11, 50, 900, 210); // light blue (player)
	init_color(10, 800, 200, 200); // red (enemy)
	init_color(14, 30, 0, 100); // background

	init_pair(1, 10, 14); // enemy
	init_pair(2, 13, 14); // missile
	init_pair(3, 12, 14); // obstacle
	init_pair(4, 11, 14); // player
	wbkgd(window, COLOR_PAIR(1)); // set background
	getmaxyx(stdscr, Game::_height, Game::_width);
	// while (this->drawHeader()) {
		// this->_time = clock();
		// ++this->_frames;
	// }

	this->_map = new Map(this->_height, this->_width);
	while (this->_map->notGameOver() && this->getInput())
	{
		// key = this->getInput();
		this->_map->update();
		this->drawHeader();
		this->_map->render();
	}

}










void Game::end(void) {
	endwin();
}

Game::Game(Game const &game) {*this = game;}

Game::~Game(void) {}

Game& Game::operator=(Game const & that) {
	(void)that;
	return *this;
}

Game::Game(void) {}

int	Game::getHeight() const { return this->_height; }
int	Game::getWidth() const { return this->_width; }
