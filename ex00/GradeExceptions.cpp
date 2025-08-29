#include "GradeExceptions.hpp"

const char	*GradeTooLowException::what(void) const _NOEXCEPT
{
	return ("Grade too low");
}

const char	*GradeTooHighException::what(void) const _NOEXCEPT
{
	return ("Grade too high");
}

