#include "GradeExceptions.hpp"

const char	*GradeTooLowException::what(void) const _NOEXCEPT
{
	return ("Grade too low");
}

const char	*GradeTooHighException::what(void) const _NOEXCEPT
{
	return ("Grade too high");
}

const char	*FormNotSignedException::what(void) const _NOEXCEPT
{
	return ("Form has not been signed");
}

