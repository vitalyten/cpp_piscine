/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:49:47 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/10 22:27:19 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARSDONFORM_HPP
# define PRESIDENTIALPARSDONFORM_HPP
# include "Form.hpp"


class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const&);
	~PresidentialPardonForm(void);
	PresidentialPardonForm& operator=(PresidentialPardonForm const&);

	std::string const& getTarget(void) const;
	void executeAction(void) const;

private:
	std::string _target;

	PresidentialPardonForm(void);
};

#endif
