#include "Dog.hpp"

// Default constructor
// Initializes a Dog object and sets the _type attribute to "Dog"
Dog::Dog() {
	this->_type = "Dog";  // Set the type of the Animal to "Dog"
	std::cout << "Dog: default constructor called" << std::endl;
}

// Destructor
// Called when a Dog object is destroyed
Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
}

// Copy constructor
// Initializes a new Dog object by copying another Dog object
Dog::Dog(const Dog &other) : Animal(other) {  // Call the copy constructor of the Animal base class
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;  // Use the assignment operator to copy the contents of 'other' to 'this'
}

// Copy assignment operator
// Assigns the values from one Dog object to another
Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: Asignation operator called" << std::endl;
	if (this != &other) {  // Avoid self-assignment
		this->_type = other.getType();  // Copy the type from the other Dog object
	}
	return *this;  // Return the current object to allow for chained assignments
}

// makeSound function
// Overridden from the Animal class to make a Dog-specific sound
void Dog::makeSound() const {
	std::cout << "woof!" << std::endl;  // Print the sound that a dog makes
}
