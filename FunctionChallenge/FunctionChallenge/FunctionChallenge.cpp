#include <iostream>

// Function without an argument
void greet()
{
    std::cout << "Hello from the greet() function!\n";
}

// Function with multiple parameters
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

// Function that passes a reference
void increaseValue(int& number)
{
    number += 5;
}

// Function overloading
void displayMessage()
{
    std::cout << "This is the first overloaded function.\n";
}

void displayMessage(std::string name)
{
    std::cout << "Hello, " << name << "!\n";
}

int main()
{
    // Call function without an argument
    greet();

    // Call function with multiple parameters
    int result = addNumbers(10, 15);
    std::cout << "Sum: " << result << "\n";

    // Pass a reference to a function
    int value = 20;
    increaseValue(value);
    std::cout << "Updated Value: " << value << "\n";

    // Call overloaded functions
    displayMessage();
    displayMessage("Victor");

    return 0;
}