#include <iostream>
#include <string>

int main()
{
    // This shows the string data type which stores text in variables 
    std::string firstName = "Victor";
    std::string lastName = "Andrade";

    std::string fullName = firstName + " " + lastName;

    std::cout << "Full Name: " << fullName << "\n";

    return 0;
}