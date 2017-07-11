/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:31 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 22:23:12 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <time.h>


class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const&);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(RobotomyRequestForm const&);

	std::string const& getTarget(void) const;
	void executeAction(void) const;

private:
	std::string _target;

	RobotomyRequestForm(void);
};

#endif
