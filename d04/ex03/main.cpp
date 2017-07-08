/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:12 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 14:48:02 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character(``zaz'');
	AMateria* tmp;
	tmp = src->createMateria(``ice'');
	zaz->equip(tmp);
	tmp = src->createMateria(``cure'');
	zaz->equip(tmp);
	ICharacter* bob = new Character(``bob'');
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	delete bob;
	delete zaz;
	delete src;
	return 0;
}
