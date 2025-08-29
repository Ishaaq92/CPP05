#include "Bureaucrat.hpp"

#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	a("Alice", 20);
		Form		f1("form 1", 40, 5);
		Form		f2("form 2", 30, 5);
		Form		f3("form 3", 20, 5);
		// Form		f4("form 4", 10, -5);

		a.signForm(f1);
		a.signForm(f2);
		a.signForm(f3);

		std::cout << f1 << f2 << f3 << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << "Failure: " << e.what() << std::endl;
	}
	return (0);
}

