#include "WrongCat.hpp"
// Default constructor
// Initializes a new WrongCat object and sets the _type attribute to "WrongCat"
WrongCat::WrongCat(void) {
	_type = "WrongCat";  // Set the type of the WrongCat
	std::cout << "WrongCat: Default Constructor Called" << std::endl;
}

// Destructor
// Called when a WrongCat object is destroyed
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat: Destructor Called" << std::endl;
}

// Copy constructor
// Initializes a new WrongCat object by copying another WrongCat object
WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) {  // Call the copy constructor of the WrongAnimal base class
	std::cout << "WrongCat: Copy Constructor Called" << std::endl;
	*this = other;  // Use the assignment operator to copy the contents of 'other' to 'this'
}

// Copy assignment operator
// Assigns the values from one WrongCat object to another
WrongCat &WrongCat::operator=(WrongCat const &other) {
	if (this != &other) {  // Avoid self-assignment
		this->_type = other.getType();  // Copy the type from the other WrongCat object
	}
	std::cout << "WrongCat: Copy Assignment Operator Called" << std::endl;
	return *this;  // Return the current object to allow for chained assignments
}

// makeSound function
// Provides a WrongCat-specific sound
void WrongCat::makeSound(void) const {
	std::cout << "Wrongmeow!" << std::endl;  // Print the sound that a wrong cat makes
}
