/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:15:38 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 23:34:55 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern(void);
	Intern(Intern const&);
	~Intern(void);
	Intern& operator=(Intern const&);

	Form* makeForm(std::string, std::string) const;

private:
	typedef Form* (Intern::*fp)(std::string) const;
	Form* makeShrubberyCreationForm(std::string) const;
	Form* makeRobotomyRequestForm(std::string) const;
	Form* makePresidentialPardonForm(std::string) const;
};

#endif
