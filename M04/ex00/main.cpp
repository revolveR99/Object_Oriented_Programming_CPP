#include "Bureaucrat.hpp"

int main(void) 
{
    // This will create a Bureaucrat object with a grade of 2 and print its details.
     std::cout << "Test case 1: Creating a bureaucrat with a valid grade" << std::endl;

    try 
    {
        Bureaucrat bureaucrat("brother", 2); // Create a bureaucrat named "brother" with grade 2
        std::cout << bureaucrat << std::endl; // Print bureaucrat details
    }
     catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }

    
    // This will test the exception handling when trying to increment a grade of 1.
     std::cout << "Test case 2: Incrementing the grade beyond the allowed limit" << std::endl;
    try 
    {
        Bureaucrat bureaucrat1("bob", 1); // Create a bureaucrat with the highest grade (1)
        bureaucrat1.incrementGrade(); // Attempt to increment the grade (invalid, as it exceeds the limit)
        std::cout << bureaucrat1 << std::endl; // Print bureaucrat details
    }
    catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }

    
    // This will test the exception handling when trying to decrement a grade of 150.
    std::cout << "Test case 3: Decrementing the grade beyond the allowed limit" << std::endl;
    try 
    {
        Bureaucrat bureaucrat2("bob", 150); // Create a bureaucrat with the lowest grade (150)
        bureaucrat2.decrementGrade(); // Attempt to decrement the grade (invalid, as it exceeds the limit)
        std::cout << bureaucrat2 << std::endl; // Print bureaucrat details
    }
    catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }
   

    // This should test if the exception is thrown when an invalid grade (0) is provided.
        std::cout << "Test case 4: Trying to create a bureaucrat with an invalid grade (grade 0)" << std::endl;
    try 
    {
        Bureaucrat bureaucrat("Invalid", 0); // Try to create a bureaucrat with an invalid grade (0)
        std::cout << bureaucrat << std::endl; // This should not be printed
    }
    catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }

    // Test case 5: Testing both increment and decrement in one object
    // This will test a bureaucrat with a middle grade and both increment and decrement operations.
    std::cout << "Test case 5: Testing both increment and decrement in one object" << std::endl;
    try 
    {
        Bureaucrat bureaucrat("Middle", 75); // Create a bureaucrat named "Middle" with grade 75
        std::cout << "Before increment: " << bureaucrat << std::endl; // Print initial details
        bureaucrat.incrementGrade(); // Increment grade (grade 75 -> grade 74)
        std::cout << "After increment: " << bureaucrat << std::endl; // Print after increment
        bureaucrat.decrementGrade(); // Decrement grade (grade 74 -> grade 75)
        std::cout << "After decrement: " << bureaucrat << std::endl; // Print after decrement
    }
    catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }
    std::cout << "Test case 6: Output matches the required format: <name>, bureaucrat grade <grade>" << std::endl;
    try {
        // Create a Bureaucrat object
        Bureaucrat bureaucrat("Alice", 3);

        // Use the overloaded << operator to print the Bureaucrat
        std::cout << bureaucrat << std::endl;

        // Create another Bureaucrat with a different grade
        Bureaucrat anotherBureaucrat("Bob", 151);
        std::cout << anotherBureaucrat << std::endl;

    } 
    catch (std::exception& err) 
    {
        std::cerr << "Exception: " << err.what() << std::endl;
    }
}


// try Block:
// Code that might throw an exception is placed inside the try block.
// If an exception occurs, the try block immediately stops executing, and control is passed to the corresponding catch block.

// catch Block:
// The catch block contains code that handles the exception.
// It can catch specific types of exceptions or all exceptions (using catch(...)).
// Each catch block is designed to handle a particular exception type.
