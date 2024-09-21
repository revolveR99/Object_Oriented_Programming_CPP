#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongCat.hpp"

// int main() {
//     // Create an Animal object
//     const Animal* meta = new Animal();
    
//     // Create a Dog object, but treat it as an Animal
//     const Animal* j = new Dog();
    
//     // Create a Cat object, but treat it as an Animal
//     const Animal* i = new Cat();
    
//     // Print the type of the Dog object
//     std::cout << j->getType() << " " << std::endl;
    
//     // Print the type of the Cat object
//     std::cout << i->getType() << " " << std::endl;
    
//     // Call makeSound on the Cat object, should output the Cat's sound
//     i->makeSound();
    
//     // Call makeSound on the Dog object, should output the Dog's sound
//     j->makeSound();
    
//     // Call makeSound on the Animal object, should output the Animal's sound
//     meta->makeSound();
    
//     // Clean up memory by deleting the objects
//     delete meta;
//     delete j;
//     delete i;
    
//     return 0;
// }


int main(void)
{
    std::cout << "\033[32mPolymorphism\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[32mANIMAL\033[0m" << std::endl;

    std::cout << "\033[35mConstructing and allocating Animals...\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << "\033[35mDestructing and deleting Animals...\033[0m" << std::endl;
    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl;
    std::cout << "\033[32mWRONG ANIMAL\033[0m" << std::endl;
    std::cout << "\033[35mConstructing and allocating Wrong Animal and Wrong Cat...\033[0m" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

    std::cout << "\033[35mDestructing and deleting Animal and Wrong Cat...\033[0m" << std::endl;
    delete wrongCat;
    delete wrongAnimal;

    return 0;
}
