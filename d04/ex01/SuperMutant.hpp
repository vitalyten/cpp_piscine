/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 22:37:01 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & that);
	~SuperMutant(void);

	SuperMutant & operator=(SuperMutant const & that);

	void takeDamage(int);

private:
	static std::string const _type;
};

#endif
