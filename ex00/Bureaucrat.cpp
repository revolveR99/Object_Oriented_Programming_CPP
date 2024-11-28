#include "Bureaucrat.hpp"

// Default constructor initializing the _name to "Bureaoo" and _grade to the lowest value (150).
Bureaucrat::Bureaucrat() : _name("Bureaoo"), _grade(LOW) {}

// Parameterized constructor that initializes _name and _grade.
// Throws exceptions if the Grade is out of the valid range.
Bureaucrat::Bureaucrat(const std::string& Name, int Grade) : _name(Name){
    if (Grade < HIGH) // Check if the Grade is too high
        throw Bureaucrat::GradeTooHighException();
    if (Grade > LOW) // Check if the Grade is too low
        throw Bureaucrat::GradeTooLowException();
    this->_grade = Grade; // Assign Grade if valid
}

// Copy constructor: copies the data from another Bureaucrat object to newly created object.
Bureaucrat::Bureaucrat(const Bureaucrat &src){
    *this = src; // Delegate to the assignment operator
}

// Assignment operator: assigns values from another Bureaucrat object.
// Checks the Grade range before copying.
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& object){
     if (this != &object)
     {
        if (object._grade < HIGH) // Grade validation
            throw Bureaucrat::GradeTooHighException();
        if (object._grade > LOW)
            throw Bureaucrat::GradeTooLowException();
        this->_grade = object._grade; // Copy the Grade
     }
    return *this; // Return the current object for chaining
}

// Overloaded output operator to print Bureaucrat details in a formatted way.
std::ostream & operator<<(std::ostream & ostrm, Bureaucrat const & object){
    ostrm << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
    return ostrm;
}

// Destructor: empty since there are no dynamically allocated resources to clean up.
Bureaucrat::~Bureaucrat() {}

// Getter for the Grade attribute. Returns the bureaucrat's Grade.
int Bureaucrat::getGrade() const{
    return this->_grade;
}

// Getter for the _name attribute. Returns the bureaucrat's Name.
std::string Bureaucrat::getName() const{
    return this->_name;
}

// Decrements the bureaucrat's Grade (makes it lower).
// Throws an exception if the Grade becomes too low.
void Bureaucrat::decrementGrade(){
    this->_grade= this->_grade + 1; // Grade increases (150 is the lowest)
    if (this->_grade > LOW) // Validate range
        throw Bureaucrat::GradeTooLowException();
}

// Increments the bureaucrat's Grade (makes it higher).
// Throws an exception if the Grade becomes too high.
void Bureaucrat::incrementGrade(){
    this->_grade= this->_grade - 1; // Grade decreases (1 is the highest)
    if (this->_grade < HIGH) // Validate range
        throw Bureaucrat::GradeTooHighException();
}

// Implementation of the GradeTooLowException's what() method.
// Returns an error message for Grades that are too low.
const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "TooLowException"; // Exception message
}

// Implementation of the GradeTooHighException's what() method.
// Returns an error message for Grades that are too high.
const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "TooHighException"; // Exception message
}

//The *THROW* keyword throws an exception when a problem is detected, which lets us create a custom error.

// Step-by-step breakdown of *this = src:
// this: Refers to the current object being created (the new Bureaucrat object).
// *this: Dereferences this to refer to the actual object being constructed.
// *this = src: Assigns the state of the src object to the current object by using the assignment operator, 
//effectively copying all the member variables from src to the new object.
