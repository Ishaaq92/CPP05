#include "Bureaucrat.hpp"

#include <iostream>

int	main(void)
{
	Bureaucrat	a("Alice", 1);
	Bureaucrat	b("Bob", 150);
	Bureaucrat	c("Charlie", 50);
	try
	{
	// 	a.incrementGrade();
	// 	b.decrementGrade();
		c.incrementGrade();
		std::cout << c << std::endl;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "No goody: " << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "No goody: " << e.what() << std::endl;
	}
}

