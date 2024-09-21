#include "Cat.hpp"

// Default constructor
// Initializes a Cat object and sets the _type attribute to "Cat"
Cat::Cat() {
	this->_type = "Cat";  // Set the type of the Animal to "Cat"
	std::cout << "Cat: default constructor called" << std::endl;
}

// Destructor
// Called when a Cat object is destroyed
Cat::~Cat() {
	std::cout << "Cat: destructor called" << std::endl;
}

// Copy constructor
// Initializes a new Cat object by copying another Cat object
Cat::Cat(const Cat &other) : Animal(other) {  // Call the copy constructor of the Animal base class
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = other;  // Use the assignment operator to copy the contents of 'other' to 'this'
}

// Copy assignment operator
// Assigns the values from one Cat object to another
Cat &Cat::operator=(const Cat &other) {
	std::cout << "cat: assignation operator called" << std::endl;
	if (this != &other) {  // Avoid self-assignment
		this->_type = other.getType();  // Copy the type from the other Cat object
	}
	return *this;  // Return the current object to allow for chained assignments
}

// makeSound function
// Overridden from the Animal class to make a Cat-specific sound
void Cat::makeSound() const {
	std::cout << "meooooooooooooooooow!" << std::endl;  // Print the sound that a cat makes
}

