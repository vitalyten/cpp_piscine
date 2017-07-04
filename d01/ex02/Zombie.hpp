/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:13 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 16:19:59 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
public:
	Zombie(std::string);
	~Zombie(void);

	void announce(void) const;
	void set_type(std::string);

private:
	std::string _name;
	std::string _type;
};

#endif
