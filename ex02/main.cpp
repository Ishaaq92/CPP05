/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:09:20 by ishaaq            #+#    #+#             */
/*   Updated: 2026/04/02 16:02:08 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

// RRF: Required grades: sign 72, exec 45	
// SCF: Required grades: sign 145, exec 137
// PPF: Required grades: sign 25, exec 5

int	main(void)
{
	Bureaucrat	a("Alice", 100);
	Bureaucrat	b("Bob", 25);
	Bureaucrat	c("Charlie", 1);
	PresidentialPardonForm	f1("Timmy");

	a.signForm(f1);
	b.signForm(f1);
	c.signForm(f1);
	b.executeForm(f1);
	c.executeForm(f1);

	// std::cout << f1 << std::endl;
	return (0);
}

