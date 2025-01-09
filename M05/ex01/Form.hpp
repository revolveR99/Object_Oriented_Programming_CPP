#ifndef FORM_HPP_
# define FORM_HPP_

# include "Bureaucrat.hpp"

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form {
	public:
		Form(const Form& form);
		Form(const std::string& name, int grade2Sign, int grade2Execute);
		Form& operator=(const Form& other);
		~Form();
		
		int getgrade2Execute() const;
		int getgrade2Sign() const;
		void checkGrade(int grade);
		bool getSigned() const;
		const std::string& getName() const;

		void beSigned(Bureaucrat const &bureaucrat);

		class GradeTooLowException : public std::exception {
			public: const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public: const char* what() const throw();
		};
		

    private:
	
		Form();

		bool _signed;

		const std::string _name;
		const int _grade2Sign;
		const int _grade2Execute;
};

std::ostream& operator<<(std::ostream& ostr, const Form& object);

#endif