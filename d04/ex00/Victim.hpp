/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:17:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/07 17:22:12 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
public:
	Victim(std::string name);
	Victim(Victim const & that);
	~Victim(void);

	void birth(void);
	Victim & operator=(Victim const & rhs);
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;

protected:
	std::string _name;
	Victim(void);
};

#endif

std::ostream & operator<<(std::ostream & o, Victim const & victim);
