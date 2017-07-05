/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:57:14 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 21:12:37 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human created." << std::endl;
}

Human::~Human() {
	std::cout << "Human destroyed." << std::endl;
}

std::string Human::identify() const {
	return this->_brain.identify();
}

Brain Human::getBrain() const {
	return this->_brain;
}
