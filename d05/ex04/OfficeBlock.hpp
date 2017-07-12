/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:06:03 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/11 19:04:04 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "Intern.hpp"

class OfficeBlock {
public:
	class InternNotSet : public std::exception {
	public:
		InternNotSet(void);
		InternNotSet(InternNotSet const&);
		~InternNotSet(void) throw();
		InternNotSet& operator=(InternNotSet const&);
		char const* what(void) const throw();
	};

	class SignerNotSet : public std::exception {
	public:
		SignerNotSet(void);
		SignerNotSet(SignerNotSet const&);
		~SignerNotSet(void) throw();
		SignerNotSet& operator=(SignerNotSet const&);
		char const* what(void) const throw();
	};

	class ExecutorNotSet : public std::exception {
	public:
		ExecutorNotSet(void);
		ExecutorNotSet(ExecutorNotSet const&);
		~ExecutorNotSet(void) throw();
		ExecutorNotSet& operator=(ExecutorNotSet const&);
		char const* what(void) const throw();
	};

	class NoSuchForm : public std::exception {
	public:
		NoSuchForm(void);
		NoSuchForm(NoSuchForm const&);
		~NoSuchForm(void) throw();
		NoSuchForm& operator=(NoSuchForm const&);
		char const* what(void) const throw();
	};

	OfficeBlock(void);
	OfficeBlock(Intern*, Bureaucrat*, Bureaucrat*);
	~OfficeBlock(void);

	void setIntern(Intern*);
	void setSigner(Bureaucrat*);
	void setExecutor(Bureaucrat*);

	void doBureaucracy(std::string, std::string);

private:
	Intern* _intern;
	Bureaucrat* _signer;
	Bureaucrat* _executor;

	OfficeBlock(OfficeBlock const&);
	OfficeBlock& operator=(OfficeBlock const&);
};

#endif
