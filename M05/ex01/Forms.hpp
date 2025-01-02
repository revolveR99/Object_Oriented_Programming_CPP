#ifndef FORMS_HPP
# define FORMS_HPP

#include "Bureaucrat.hpp" // Includes the Bureaucrat class, likely for signature checking.
#include <iostream> // Includes input/output stream functionality.

class Forms {
    private:
        std::string _name; // The name of the form.
        bool _isSigned; // Whether the form has been signed.
        int _gradeLevelSign; // The grade level required to sign the form.
        int _gradeLevelExecution; // The grade level required to execute the form.

    public:
        Forms(void); // Default constructor, creates an empty form.
        Forms(const std::string name, int signGrade, int execGrade); // Parameterized constructor, initializes a form with specific attributes.
        Forms(Forms const &oldForm); // Copy constructor, creates a new form as a copy of another form.
        
        ~Forms(void); // Destructor, cleans up any resources when the form object is destroyed.

        Forms &operator=(Forms const &toCopy); // Assignment operator, copies the attributes of one form to another.

        std::string getName(void) const; // Getter for the name of the form.
        int getSignGrade(void) const; // Getter for the sign grade.
        int getExecGrade(void) const; // Getter for the execution grade.
        void setSignature(Bureaucrat const &bCrat); // Method to set the signature (i.e., allow a Bureaucrat to sign the form).
        
        std::string isSigned(void) const; // Returns whether the form is signed as a string ("signed" or "not signed").
        
        class gradeTooHighException: public std::exception // Exception class for when the grade is too high.
        {
            public:
                virtual const char *what() const throw(); // Override the what() method to provide the exception message.
        };
        
        class gradeTooLowException: public std::exception // Exception class for when the grade is too low.
        {
            public:
                virtual const char *what() const throw(); // Override the what() method to provide the exception message.
        };
};

// Overloaded insertion operator for outputting Forms objects in a readable format.
std::ostream &operator<<(std::ostream &out, Forms const &obj);

#endif
