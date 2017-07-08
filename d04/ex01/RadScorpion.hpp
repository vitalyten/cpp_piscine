/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 23:11:43 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDSCORPION_HPP
# define REDSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & that);
	~RadScorpion(void);

	RadScorpion & operator=(RadScorpion const & that);

private:
	static std::string const _type;
};

#endif
