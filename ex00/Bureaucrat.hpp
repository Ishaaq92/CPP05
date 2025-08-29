#pragma once

# include <iostream>
# include "GradeExceptions.hpp"

class Bureaucrat
{
	private:
		const std::string	name_;
		int					grade_;

	protected:

	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	const std::string	getName(void);
	int					getGrade(void);
	void				incrementGrade(void);
	void				decrementGrade(void);
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat b);
