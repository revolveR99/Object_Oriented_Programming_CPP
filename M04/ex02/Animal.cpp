#include "Animal.hpp"
// Default constructor
// Initializes an Animal object with an empty _type and prints a message
Animal::Animal() : _type("") {
	std::cout << "Animal: Default constructor called" << std::endl;
}

// Parametrized constructor
// Initializes an Animal object with the given type and prints a message
Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Animal: Parametrized constructor called" << std::endl;
}

// Destructor
// Called when an Animal object is destroyed and prints a message
Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

// Copy constructor
// Creates a new Animal object by copying another Animal object
Animal::Animal(const Animal &other) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;  // Assign the values of the other object to this one
}

// Copy assignment operator
// Assigns the values from one Animal object to another
Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: Assignment operator called" << std::endl;
	if (this != &other) {  // Check for self-assignment
		this->_type = other.getType();  // Copy the type from the other object
	}
	return *this;  // Return the current object to allow chaining of assignments
}

// makeSound function
// A virtual function meant to be overridden in derived classes, but in the base class it just prints "Unknown sound"
void Animal::makeSound() const {
	std::cout << "Unknown sound" << std::endl;
}

// Getter function for the _type attribute
// Returns the type of the Animal object
std::string Animal::getType() const {
	return this->_type;
}
