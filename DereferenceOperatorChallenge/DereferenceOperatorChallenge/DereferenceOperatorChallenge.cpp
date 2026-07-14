#include <iostream>

int main()
{
    int number = 25;

    // This program demonstrates how the dereference operator (*) works.It uses a pointer to access the value stored at a memory addressand displays that value in the console.
    
    int* ptr = &number;

    std::cout << "Value of number: " << number << "\n";
    std::cout << "Memory Address: " << ptr << "\n";
    std::cout << "Dereferenced Value: " << *ptr << "\n";

    return 0;
}