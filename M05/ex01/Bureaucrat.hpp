#ifndef BUREAUCRAT_HPP  
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>   

#define LOW 150   // Defines the lowest possible bureaucrat grade.
#define HIGH 1    // Defines the highest possible bureaucrat grade.

class Form;

class Bureaucrat 
{
     private:

        // A constant string to store the name of the bureaucrat.
        std::string const _name;

        // An integer to store the bureaucrat's grade. Can be modified within valid limits.
        int _grade;
    
    public:

        // Default constructor
        Bureaucrat();

        // Parameterized constructor
        Bureaucrat(const std::string& Name, int Grade);

        // Copy constructor: Creates a new Bureaucrat object as a copy of another.
        Bureaucrat(const Bureaucrat &src);

        // Assignment operator: Assigns the attributes of one Bureaucrat to another.
        Bureaucrat& operator=(const Bureaucrat& object);

         // Destructor
        ~Bureaucrat();

        // Accessors (Getters)
        // Getter for the name attribute. Marked const because it does not modify the object.
        std::string getName() const;

        // Getter for the grade attribute. Marked const for the same reason.
        int getGrade() const;

        // Increments the grade (numerically decreases it). Throws an exception if the grade becomes too high.
        void incrementGrade();

        // Decrements the grade (numerically increases it). Throws an exception if the grade becomes too low.
        void decrementGrade();

        //Ex 01 print message whether form signed also can't be signed
        void signForm(Form& form);

        // Exception class for handling grades that are too high.
        class GradeTooHighException : public std::exception {
            public:
                // Overrides the what() function to provide a specific error message.
                const char *what() const throw();
        };

        // Exception class for handling grades that are too low.
        class GradeTooLowException : public std::exception {
            public:
                // Overrides the what() function to provide a specific error message.
                const char *what() const throw();
        };
};

// Overloaded insertion operator for printing Bureaucrat objects in a formatted way.
std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif
