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
		std::string	getName(void);
		bool		getSigned(void);
		int			getGradeToSign(void);
		int			getGradeToExecute(void);
		void		beSigned(Bureaucrat &b);
};
