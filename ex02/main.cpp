/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:09:20 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/30 17:10:28 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int	main(void)
{
	Bureaucrat	a("Alice", 100);
	Bureaucrat	b("Bob", 30);
	Bureaucrat	c("Charlie", 1);
	PresidentialPardonForm	f1("PPF form 1", 25, 5, "Timmy" );

	// a.signForm(f1);
	b.signForm(f1);
	c.signForm(f1);
	b.executeForm(f1);
	c.executeForm(f1);

	// std::cout << f1 << std::endl;
	return (0);
}

