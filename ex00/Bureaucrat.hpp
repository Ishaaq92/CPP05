/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:59:39 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/03 15:13:57 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat	&operator=(const Bureaucrat &rhs);
	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &b);
