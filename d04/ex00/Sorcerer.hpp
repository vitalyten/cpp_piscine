/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 19:36:50 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include "Victim.hpp"
# include <iostream>

class Sorcerer {
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & that);
	~Sorcerer(void);

	Sorcerer & operator=(Sorcerer const & rhs);

	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(Victim const &) const;

private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
};

#endif

std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer);
