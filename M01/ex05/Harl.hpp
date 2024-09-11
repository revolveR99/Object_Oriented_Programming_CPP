#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>  // Required to use std::cout and std::endl for output
#include <string>    // Required to use std::string for string manipulation

// The Harl class declaration
class Harl
{
    private:
        // These are private member functions that will output specific messages.
        // They are not meant to be called directly from outside the class.
        void debug( void );   // Outputs a debug message
        void info( void );    // Outputs an informational message
        void warning( void ); // Outputs a warning message
        void error( void );   // Outputs an error message

    public:
        // This is the public member function that will be accessible outside the class.
        // It takes a string argument (level) and will call the appropriate private function
        // based on the value of this argument.
        void complain( std::string level );
};

// The #endif directive ends the conditional inclusion started with #ifndef.
// It ensures that this header file is only included once during compilation,
// avoiding redefinition errors.
#endif
