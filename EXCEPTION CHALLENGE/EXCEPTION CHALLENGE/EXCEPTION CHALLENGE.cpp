#include <iostream>

int main()
{
    // This program shows how to use try, throw, and catch to handle exceptions.

    try
    {
        int age = 15;

        if (age < 18)
        {
            throw age;
        }

        std::cout << "Access granted.\n";
    }
    catch (int myAge)
    {
        std::cout << "Access denied. You must be at least 18 years old.\n";
    }

    return 0;
}