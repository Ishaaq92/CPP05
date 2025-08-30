/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:22:22 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/29 23:02:37 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name_(name), signed_(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	this->gradeToSign_ = gradeToSign;
	this->gradeToExecute_ = gradeToExecute;
	std::cout << this->name_ << ": Form was constructed" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << this->name_ << ": Form was destructed" << std::endl;
}

bool		AForm::checkIfAuthorised(const Bureaucrat &b) const
{
	if (b.getGrade() > this->getGradeToExecute())
		return (throw GradeTooLowException(), false);
	return (true);
}

std::ostream		&operator<<(std::ostream &out, const AForm &form)
{
	out << "Form details" << std::endl <<
		"Name: " << form.getName() << std::endl <<
		"Status: " << form.getSigned() << std::endl <<
		"Grade to Sign: " << form.getGradeToSign() << std::endl <<
		"Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

std::string	AForm::getName(void) const
{
	return (this->name_);
}

bool		AForm::getSigned(void) const
{
	return (this->signed_);
}

int			AForm::getGradeToSign(void) const 
{
	return (this->gradeToSign_);
}

int			AForm::getGradeToExecute(void) const
{
	return (this->gradeToExecute_);
}

void		AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->gradeToSign_)
		throw GradeTooLowException();
	this->signed_ = true;
}
