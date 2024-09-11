#include <iostream> //provides facilities for input and output operations. 
#include <cctype> //functions used to check characters and convert their case

//std::cout to print various types of data to the console, such as strings, numbers, and characters
//std::endl used to insert newlines and flush stream

int main(int ac, char **av)
{
    if(ac == 1)  // If there is only one argument (the program name)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl; // Print a message , flush the stream, and put newline
        return 0;
    }
    for (int i = 1; i < ac; i++) // Loop through each command line argument starting from the second one
    {
       std::string str(av[i]); // Convert the C-style string argument to a C++ string 
       for (size_t j = 0; j < str.length(); j++) // Loop through each character in the string
       {
        std::cout << (char)std::toupper(str[j]); // Convert the character to uppercase and print it , toupper takes int and return int (ACII) so we need to cast to so it prints char not ASCII
       }
    }
    std::cout << std::endl;
}

// 'std' Namespace
// Namespaces allow you to group logically related classes, functions, and other identifiers together, which helps avoid name collisions

// std is the namespace provided by the C++ Standard Library.
// cout is an object within the std namespace that represents the standard output stream

// Flushing the stream means that any buffered output is sent immediately to the display device.
//  This can be important for ensuring that all output is visible at the intended time, 
//  especially in programs with frequent updates or in interactive applications.
