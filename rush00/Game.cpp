/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:53:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/09 00:03:24 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include "Entity.hpp"
#include <ncurses.h>

Game::Game(void) : _count(0), _size(32) {
	std::cout << "game created." << std::endl;
	this->_entities = new Entity*[32];
}

bool Game::draw(void) {
	Entity *entity;
	Entity *player;

	attron(COLOR_PAIR(1));
	for (int i = 0; i < this->_count; ++i) {

		entity = this->_entities[i];
		if (entity->_player) player = entity;
		entity->_y -= entity->_spead;

		if (entity->_player) mvprintw(entity->_prev_y, entity->_prev_x, "%c", ' ');
		if (entity->_player) mvprintw(entity->_y, entity->_x, "%c", 'A');
		if (!entity->_player) mvprintw(entity->_y, entity->_x, "%c", '.');
		entity->_prev_x = entity->_x;
		entity->_prev_y = entity->_y;
	}

	int key;
	// refresh();
	if ((key = wgetch(stdscr)) == ESC) return false;
	if (key == UP) --player->_y;
	if (key == DOWN) ++player->_y;
	if (key == LEFT) --player->_x;
	if (key == RIGHT) ++player->_x;
	if (key == SPACE) {
		Entity *missile = new Entity(player->_x, player->_y - 1, 1, 1, 10);
		missile->_spead = 1;
		missile->_player = false;
		this->addEntity(missile);
	}

	return true;
}


void Game::resize(void) {
	Entity** tmp = new Entity*[this->_size * 2];
	for (int i = 0; i < this->_count; ++i) {
		tmp[i] = this->_entities[i];
	}
	delete this->_entities;
	this->_entities = tmp;
}


void Game::addEntity(Entity* e) {
	if (this->_count == this->_size) this->resize();
	this->_entities[this->_count] = e;
	++this->_count;
}

void Game::start(void) {
	std::srand(std::time(nullptr));

	initscr();
	// noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	getmaxyx(stdscr, Game::_height, Game::_width);
	Entity* entity = new Entity(this->_width / 2, this->_height / 10 * 9, 1, 1, 10);
	entity->_spead = 0;
	entity->_player = true;
	this->addEntity(entity);
	while (this->draw());
	delete entity;
}

void Game::end(void) {
	endwin();
}

Game::Game(Game const &that) {
	(void)that;
	std::cout << "game created." << std::endl;
}

Game::~Game(void) {
	std::cout << "game destroyed." << std::endl;
}

Game& Game::operator=(Game const & that) {
	(void)that;
	return *this;
}
