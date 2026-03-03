/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:58:50 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/03 15:39:02 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade_ = grade;
	std::cout << this->getName() << ": Bureaucrat was constructed" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->getName() << ": Bureaucrat was destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name_(b.name_), grade_(b.grade_)
{
	std::cout << this->getName() << ": Bureaucrat was constructed" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << this->getName() << ": Bureaucrat's grade is set to " << rhs.getName() << "'s grade " << std::endl;

	if (this == &rhs)
		return (*this);
	this->grade_ = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name_);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->grade_);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->grade_ == 1)
		throw GradeTooHighException();
	this->grade_ --;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade_ == 150)
		throw GradeTooLowException();
	this->grade_ ++;
}
