/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:57:37 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 23:55:04 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Entity.hpp"

Entity::Entity(void) {}

Entity::Entity(int x, int y, int h, int w, int hp)
: _x(x), _y(y), _prev_x(x), _prev_y(y), _height(h), _width(w), _hp(hp) {
	// std::cout << "entity created." << std::endl;
}

Entity::Entity(Entity const & that) {(void)that;}

Entity::~Entity(void) {
	// std::cout << "entity destroyed." << std::endl;
}

Entity& Entity::operator=(Entity const & that) {
	(void)that;
	return *this;
}

void Entity::draw(void) {}
