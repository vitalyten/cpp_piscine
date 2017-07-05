/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:57:01 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 20:38:47 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <iomanip>

Brain::Brain() {
	std::stringstream stream;
	stream << "0x" << std::setfill('0') << std::setw(sizeof(long) * 2) << std::hex << (long)this;
	this->_mem_address = stream.str();
	std::cout << "Brain " << this->_mem_address << " created." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain " << this->_mem_address << " destroyed." << std::endl;
}

std::string Brain::identify() const {
	return this->_mem_address;
}
