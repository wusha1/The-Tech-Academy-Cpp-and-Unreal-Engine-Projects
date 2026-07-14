#include <iostream>

int main()
{
    int number = 25;

    // This create a pointer variable
    int* ptr = &number;

    std::cout << "Value: " << number << "\n";
    std::cout << "Memory Address: " << ptr << "\n";

    return 0;
}