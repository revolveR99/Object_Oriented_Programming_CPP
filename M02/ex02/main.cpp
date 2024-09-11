#include "Fixed.hpp"

int main(void) {
    // Create a default Fixed object 'a'
    Fixed a;
    
    // Create a Fixed object 'b' by multiplying two Fixed objects:
    // Fixed(5.05f) converts 5.05 to a Fixed point value
    // Fixed(2) converts 2 to a Fixed point value
    // Then multiply these two Fixed point values
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    // Output the value of 'a' (initially should be 0)
    std::cout << a << std::endl;
    
    // Pre-increment 'a' (increment 'a' and then print the updated value)
    std::cout << ++a << std::endl;
    
    // Output the updated value of 'a' (after the pre-increment)
    std::cout << a << std::endl;
    
    // Post-increment 'a' (print the value of 'a' before incrementing it)
    std::cout << a++ << std::endl;
    
    // Output the value of 'a' after post-increment (should be incremented)
    std::cout << a << std::endl;
    
    // Output the value of 'b' (should be the result of Fixed(5.05f) * Fixed(2))
    std::cout << b << std::endl;
    
    // Output the maximum of 'a' and 'b'
    std::cout << Fixed::max(a, b) << std::endl;
    
    return 0;
}
