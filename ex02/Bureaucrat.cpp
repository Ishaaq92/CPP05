/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:12:33 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/29 23:02:21 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade_ = grade;
	std::cout << this->getName() << ": Bureaucrat was constructed" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->getName() << ": Bureaucrat was destructed" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name_);
}

int					Bureaucrat::getGrade(void) const
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

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}

void		Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name_ << " signed " << form.getName() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << this->name_ << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << ": Failed to execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

