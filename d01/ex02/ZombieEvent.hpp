/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:25 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/04 16:21:35 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump(void);
private:
	std::string _type;
};

#endif
