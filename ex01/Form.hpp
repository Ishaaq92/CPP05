#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name_;
		bool				signed_;
		int					gradeToSign_;
		int					gradeToExecute_;

	protected:

	public:
		Form(std::string name_, int gradeToSign_, int gradeToExecute_);
		~Form(void);
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(Bureaucrat &b);
};

std::ostream		&operator<<(std::ostream &out, const Form &form);
