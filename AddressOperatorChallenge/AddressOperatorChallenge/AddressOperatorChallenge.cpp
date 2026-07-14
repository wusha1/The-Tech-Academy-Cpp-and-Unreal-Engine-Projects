#include <iostream>

int main()
{
    // This shows the & operator which is used to get the memory address of a variable

    int number = 25;

    std::cout << "Value: " << number << "\n";
    std::cout << "Memory Address: " << &number << "\n";

    return 0;
}