/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:32:26 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/03 15:32:46 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	a("Alice", 1);
	Bureaucrat	b("Bob", 150);
	Bureaucrat	c("Charlie", 50);
	try
	{
	 	a.incrementGrade();
	 	b.decrementGrade();
		c.incrementGrade();
		std::cout << c << std::endl;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "No good: " << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "No good: " << e.what() << std::endl;
	}
}
