
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade_ = grade;
	std::cout << "Bureaucrat was constructed" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was destructed" << std::endl;
}

const std::string	Bureaucrat::getName(void)
{
	return (this->name_);
}

int					Bureaucrat::getGrade(void)
{
	return (this->grade_);
}

void				Bureaucrat::incrementGrade(void)
{
	if (this->grade_ + 1 > 150)
		throw GradeTooHighException();
	this->grade_ --;
}

void				Bureaucrat::decrementGrade(void)
{
	if (this->grade_ + 1 > 150)
		throw GradeTooLowException();
	this->grade_ ++;
}

std::ostream		&operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}

