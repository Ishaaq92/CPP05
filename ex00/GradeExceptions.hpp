/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeExceptions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:33:23 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/03 15:35:02 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class GradeTooHighException : public std::exception
{
	public:
		virtual const char	*what(void) const throw();
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char	*what(void) const throw();
};
