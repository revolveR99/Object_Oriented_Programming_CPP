#ifndef PHONEBOOK_HPP    // Start of the include guard
# define PHONEBOOK_HPP   // Define the include guard

# include "main.hpp"     // Include the main header file for necessary dependencies

// Define the PhoneBook class
class PhoneBook
{
    public:
        PhoneBook();              // Constructor: Initializes a new PhoneBook object
        int add();                // Method to add a new contact to the phonebook
        int select();             // Method to select and display a specific contact's details
        int display_phonebook();  // Method to display all contacts in the phonebook

    private:
        Contact _contacts[8];     // Private array to store up to 8 Contact objects
        int _number;              // Private variable to store the number of contacts currently in the phonebook
};

#endif    // End of the include guard
