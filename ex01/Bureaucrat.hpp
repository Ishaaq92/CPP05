#pragma once

# include <iostream>
# include "GradeExceptions.hpp"
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name_;
		int					grade_;

	protected:

	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	void				signForm(Form &form);

};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &b);
