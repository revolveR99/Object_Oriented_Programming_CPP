#ifndef BUREAUCRAT_HPP  
#define BUREAUCRAT_HPP 
#include <iostream> // Includes input/output stream functionality.
#include <string>   // Includes the string class for handling text.

#define LOW 150   // Defines the lowest possible bureaucrat grade.
#define HIGH 1    // Defines the highest possible bureaucrat grade.

// Declaration of the Bureaucrat class.
class Bureaucrat 
{
     private:

        // A constant string to store the name of the bureaucrat. Cannot be changed after construction.
        std::string const _name;

        // An integer to store the bureaucrat's grade. Can be modified within valid limits.
        int _grade;
    
    public:

        // Default constructor: Creates a Bureaucrat with uninitialized attributes.
        Bureaucrat();

        // Parameterized constructor: Initializes a Bureaucrat with a name and grade.
        // If the grade is invalid, an exception will be thrown.
        Bureaucrat(const std::string& Name, int Grade);

        // Copy constructor: Creates a new Bureaucrat object as a copy of another.
        Bureaucrat(const Bureaucrat &src);

        // Assignment operator: Assigns the attributes of one Bureaucrat to another.
        Bureaucrat& operator=(const Bureaucrat& object);

         // Destructor: Cleans up resources when a Bureaucrat object is destroyed.
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
