#pragma once

# include <iostream>

class GradeTooHighException : public std::exception
{
	public:
		virtual const char	*what(void) const _NOEXCEPT;
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char	*what(void) const _NOEXCEPT;
};

class FormNotSignedException : public std::exception
{
	public:
		virtual const char	*what (void) const _NOEXCEPT;
};

