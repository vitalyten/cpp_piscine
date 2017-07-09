/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:43:23 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/08 18:16:51 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & that);
	~MateriaSource(void);

	MateriaSource & operator=(MateriaSource const & that);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
	AMateria* _source[4];
	int _count;
	static int const _maxCount = 4;
};

#endif
