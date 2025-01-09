#include "Form.hpp"

void Form::checkGrade(int grade)
{
		if (grade < HIGH)
			throw Bureaucrat::GradeTooHighException();
		if (grade > LOW)
			throw Bureaucrat::GradeTooLowException();
}

Form::Form() : _signed(false), _name("form"), _grade2Sign(150), _grade2Execute(150) {}

Form::Form(const std::string &name, int grade2Sign, int grade2Execute) : _signed(false), _name(name), _grade2Sign(grade2Sign), _grade2Execute(grade2Execute)
{
	checkGrade(grade2Sign);
	checkGrade(grade2Execute);
	std::cout << "Form created" << std::endl;
}

Form::Form(const Form &other) : _signed(other._signed), _name(other._name), _grade2Sign(other._grade2Sign), _grade2Execute(other._grade2Execute)
{
	std::cout << "Copy of form created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destroyed" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

const std::string &Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getgrade2Sign() const
{
	return this->_grade2Sign;
}

int Form::getgrade2Execute() const
{
	return this->_grade2Execute;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade2Sign)
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		std::cout << bureaucrat.getName() << " couldn’t sign  " << this->_name << " because ";
		throw Form::GradeTooLowException();

	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Exception: grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Exception: grade too low";
}

std::ostream &operator<<(std::ostream &ostr, const Form &object)
{
	ostr << "Form " << object.getName()
	   << ", status: " << (object.getSigned() ? "signed" : "not signed")
	   << ", sign grade: " << object.getgrade2Sign()
	   << ", execute grade: " << object.getgrade2Execute()
	   << std::endl;
	return ostr;
}