/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:15 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 21:59:21 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>


class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const&);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const&);

	std::string const& getTarget(void) const;
	void executeAction(void) const;

private:
	std::string _target;

	ShrubberyCreationForm(void);
};

#endif
