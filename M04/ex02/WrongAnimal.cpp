#include "WrongAnimal.hpp"

// Default constructor
// Initializes a WrongAnimal object and sets the _type attribute to "WrongAnimal"
WrongAnimal::WrongAnimal() {
	this->_type = "WrongAnimal";  // Set the type of the Animal to "WrongAnimal"
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

// Destructor
// Called when a WrongAnimal object is destroyed
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

// Copy constructor
// Initializes a new WrongAnimal object by copying another WrongAnimal object
WrongAnimal::WrongAnimal(const WrongAnimal &other) : Animal(other) {  // Call the copy constructor of the Animal base class
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = other;  // Use the assignment operator to copy the contents of 'other' to 'this'
}

// makeSound function
// Provides a WrongAnimal-specific sound
void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal sound" << std::endl;  // Print a generic wrong animal sound
}

// Copy assignment operator
// Assigns the values from one WrongAnimal object to another
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal: assignation operator called" << std::endl;
	if (this != &other) {  // Avoid self-assignment
		this->_type = other.getType();  // Copy the type from the other WrongAnimal object
	}
	return *this;  // Return the current object to allow for chained assignments
}
