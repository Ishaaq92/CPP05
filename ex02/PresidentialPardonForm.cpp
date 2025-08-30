/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:12:58 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/29 23:08:09 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name, int gradeToSign, int gradeToExecute, std::string target) :  AForm(name, gradeToSign, gradeToExecute), target_(target)
{
	std::cout << "PresidentialPardonForm was constructed" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm was destructed" << std::endl;
}
		
void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw FormNotSignedException();
	else if (checkIfAuthorised(executor) == false)
		throw GradeTooLowException();
	std::cout << this->target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

