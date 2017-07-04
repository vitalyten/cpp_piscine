/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:04:16 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 15:38:28 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack(std::string name) {
	Pony stack_pony = Pony(name);
	stack_pony.jump();
}

void ponyOnTheHeap(std::string name) {
	Pony *heap_pony = new Pony(name);
	heap_pony->jump();
	delete heap_pony;
}

int main(void) {
	ponyOnTheStack("Stacky");
	ponyOnTheHeap("Heapy");
	return 0;
}
