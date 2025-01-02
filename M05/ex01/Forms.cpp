#include "Forms.hpp"

// Default constructor: Initializes a basic form with default values.
Forms::Forms(void){
    this->_name = "Unknown Form"; // Name is set to "Unknown Form" by default.
    this->_isSigned = false; // Form is not signed initially.
    this->_gradeLevelSign = 150; // Default grade for signing is 150.
    this->_gradeLevelExecution = 150; // Default grade for execution is 150.
    std::cout << "Default form constructor called, base level form created" << std::endl; // Notifies about the creation of a default form.
}

// Parameterized constructor: Initializes a form with specific name and grades, with validation checks.
Forms::Forms(const std::string name, int signGrade, int execGrade) {
    this->_name = name; // Set the name of the form.
    this->_isSigned = false; // Form is not signed initially.
    
    // Exception handling for invalid grades.
    if (signGrade < 1 || execGrade < 1) // Check if grades are too high.
        throw gradeTooHighException(); // Throws an exception if the grade is too high.
    else if (signGrade > 150 || execGrade > 150) // Check if grades are too low.
        throw gradeTooLowException(); // Throws an exception if the grade is too low.
    else if (signGrade > execGrade) // Check if sign grade is higher than exec grade.
        throw gradeTooHighException(); // Throws an exception if sign grade is higher than exec grade.
    else {
        this->_gradeLevelSign = signGrade; // Assign valid grade for signing.
        this->_gradeLevelExecution = execGrade; // Assign valid grade for execution.
        std::cout << "Custom Form " << this->_name << " created" << std::endl; // Notifies about the creation of a custom form.
    }
}

// Copy constructor: Creates a new form by copying the attributes of an existing one.
Forms::Forms(Forms const &oldForm) {
    *this = oldForm; // Calls the assignment operator to copy the form's attributes.
    std::cout << "Form Photocopied" << std::endl; // Notifies that the form has been copied.
}

// Destructor: Cleans up and outputs a message when the form is destroyed.
Forms::~Forms(void) 
{
    std::cout << this->_name << " Form got shredded and binned" << std::endl; // Outputs a message when a form is destroyed.
}

// Assignment operator: Copies attributes from one form to another.
Forms &Forms::operator=(Forms const &toCopy) 
{
    this->_name = toCopy._name; // Copies the name.
    this->_isSigned = toCopy._isSigned; // Copies the signed status.
    this->_gradeLevelExecution = toCopy._gradeLevelExecution; // Copies the execution grade.
    this->_gradeLevelSign = toCopy._gradeLevelSign; // Copies the sign grade.
    return (*this); // Returns the current object.
}

// Overloaded insertion operator: Prints out the form's details in a readable format.
std::ostream &operator<<(std::ostream &out, Forms const &obj)
{
	out << "📄" << obj.getName() << " Form:" << std::endl; // Displays the name of the form.
	out << "Status:" << obj.isSigned() << std::endl; // Displays whether the form is signed.
	out << "Grade to sign:" << obj.getSignGrade() << std::endl; // Displays the grade required to sign the form.
	out << "Grade to execute:" << obj.getExecGrade() << std::endl; // Displays the grade required to execute the form.
	return (out); // Returns the output stream.
}

// Getter for the form's name.
std::string Forms::getName(void) const 
{
    return (this->_name); // Returns the name of the form.
}

// Getter for the sign grade.
int Forms::getSignGrade(void) const 
{
    return (this->_gradeLevelSign); // Returns the grade required to sign the form.
}

// Getter for the execution grade.
int Forms::getExecGrade(void) const 
{
    return (this->_gradeLevelExecution); // Returns the grade required to execute the form.
}

// Getter for the signed status.
std::string Forms::isSigned(void) const 
{
    if (_isSigned) // Checks if the form is signed.
        return("True"); // Returns "True" if the form is signed.
    else
        return("False"); // Returns "False" if the form is not signed.
}

// Sets the form's signature, with permission checks based on the bureaucrat's grade.
void Forms::setSignature(Bureaucrat const &bcrat) 
{
   if (this->_isSigned == true) // Checks if the form is already signed.
        std::cout << "Form already signed bro" << std::endl; // Outputs a message if the form is already signed.
    else if (this->_gradeLevelSign < bcrat.getGrade()){ // Checks if the bureaucrat's grade is too low.
        std::cout << "Bureaucrat " << bcrat.getName() << " not qualified to sign this form." << std::endl;
        throw gradeTooLowException(); // Throws an exception if the bureaucrat's grade is too low.
    }
    else 
    {
        this->_isSigned = true; // Sets the form as signed.
        std::cout << "Bureaucrat " << bcrat.getName() << " has signed the " << this->_name << " form" << std::endl; // Outputs a message when the bureaucrat signs the form.
    }
}

// Custom exception message when the grade is too low to sign the form.
const char *Forms::gradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's Grade is too low and can't sign this form"); // Error message for low grade.
} 

// Custom exception message when the grade is too high.
const char *Forms::gradeTooHighException::what(void) const throw()
{
    return("Grade is too high should be between 1 & 150"); // Error message for high grade.
} 
