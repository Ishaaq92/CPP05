#include "Bureaucrat.hpp"

#include <iostream>

int	main(void)
{
	try
	{
		// Bureaucrat	a("Alice", 0);
		Bureaucrat	b("Bob", 151);
		Bureaucrat	c("Charlie", 50);
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

