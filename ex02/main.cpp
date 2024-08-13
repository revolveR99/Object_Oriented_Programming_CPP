#include <iostream>  // Include the input/output stream library

int main()
{
    // Initialize a string variable with the value "HI THIS IS BRAIN"
    std::string myString = "HI THIS IS BRAIN";

    // Declare a pointer to the string and assign it the address of myString
    std::string* stringPTR = &myString;

    // Declare a reference to the string, referring to the same string as myString
    std::string& stringREF = myString;

    // Print the memory address of the myString variable
    std::cout << "Memory address of the myString variable - " << &myString << std::endl;

    // Print the memory address held by the pointer stringPTR (which should be the same as myString's address)
    std::cout << "Memory address held by stringPTR - " << stringPTR << std::endl;

    // Print the memory address held by the reference stringREF (which should also be the same as myString's address)
    std::cout << "Memory address held by stringREF - " << &stringREF << std::endl;

    // Print the value of the myString variable
    std::cout << "Value of the myString variable - " << myString << std::endl;

    // Print the value pointed to by the pointer stringPTR (which is the value of myString)
    std::cout << "Value pointed to by stringPTR - " << *stringPTR << std::endl;

    // Print the value referred to by the reference stringREF (which is also the value of myString)
    std::cout << "Value pointed to by stringREF - " << stringREF << std::endl;

    return 0;  // Return 0 to indicate successful execution
}

//In C++, a reference is an alias for another variable. 
// When you create a reference, you essentially create a new 
// name that refers to the same memory location as the original variable. 
// Once a reference is initialized to a variable, it cannot be changed to refer to another variable.
