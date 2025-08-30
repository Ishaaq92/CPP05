/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:09:35 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/29 22:55:19 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "GradeExceptions.hpp"
# include "AForm.hpp"

class AForm;

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
	void				signForm(AForm &form);
	void				executeForm(const AForm &form);

};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &b);
