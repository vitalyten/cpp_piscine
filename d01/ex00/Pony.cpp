/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:04:08 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 15:37:51 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n) : name(n) {
	std::cout << "Pony " << this->name << " created." << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Pony " << this->name << " destroyed." << std::endl;
}

void Pony::jump(void) const {
	std::cout << "Pony " << this->name << " jumping." << std::endl;
}
