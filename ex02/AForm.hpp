#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name_;
		bool				signed_;
		int					gradeToSign_;
		int					gradeToExecute_;

	protected:

	public:
		AForm(std::string name_, int gradeToSign_, int gradeToExecute_);
		~AForm(void);
		std::string			getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				checkIfAuthorised(const Bureaucrat &b) const;

		void				beSigned(Bureaucrat &b);

		virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream		&operator<<(std::ostream &out, const AForm &form);
