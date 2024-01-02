#include <iostream>

// Function to display a greeting message
void displayGreeting() {
    std::cout << "Hello, this is a function call!" << std::endl;
}

int main() {
    // Creating Variables With Data Types
    int number = 10; // Integer variable
    double decimal = 5.75; // Double variable
    char letter = 'A'; // Character variable
    bool flag = true; // Boolean variable

    // Using variables in the code
    std::cout << "Integer: " << number << ", Double: " << decimal;
    std::cout << ", Char: " << letter << ", Bool: " << flag << std::endl;

    // Create A Conditional Statement
    if (number > 5) { // If statement implemented
        std::cout << "The number is greater than 5." << std::endl;
    } else {
        std::cout << "The number is 5 or less." << std::endl;
    }

    // Creating and Calling Functions
    displayGreeting(); // Function call

    // Adding comments to Your Code
    // This is a single-line comment explaining the main function
    /* This is a multi-line comment explaining that the main function is the entry point of a C++ program,
       and it demonstrates variable creation, conditionals, and function calls. */

    return 0;
}