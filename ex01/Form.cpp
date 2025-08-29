#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name), signed_(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	this->gradeToSign_ = gradeToSign;
	this->gradeToExecute_ = gradeToExecute;
	std::cout << this->name_ << ": Form was constructed" << std::endl;
}

Form::~Form(void)
{
	std::cout << this->name_ << ": Form was destructed" << std::endl;
}

std::string	Form::getName(void) const
{
	return (this->name_);
}

bool		Form::getSigned(void) const
{
	return (this->signed_);
}

int			Form::getGradeToSign(void) const 
{
	return (this->gradeToSign_);
}

int			Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute_);
}

void		Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->gradeToSign_)
		throw GradeTooLowException();
	this->signed_ = true;
}

std::ostream		&operator<<(std::ostream &out, const Form &form)
{
	out << "Form details" << std::endl <<
		"Name: " << form.getName() << std::endl <<
		"Status: " << form.getSigned() << std::endl <<
		"Grade to Sign: " << form.getGradeToSign() << std::endl <<
		"Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}
