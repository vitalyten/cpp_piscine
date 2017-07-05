/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:07:45 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 14:33:53 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void) {
	Human human;

	human.action("meleeAttack", "tree");
	human.action("rangedAttack", "tree");
	human.action("intimidatingShout", "tree");
	return 0;
}
