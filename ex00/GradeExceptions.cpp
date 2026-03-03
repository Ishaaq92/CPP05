/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeExceptions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:35:20 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/03 15:38:24 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeExceptions.hpp"

const char	*GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

const char	*GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}
