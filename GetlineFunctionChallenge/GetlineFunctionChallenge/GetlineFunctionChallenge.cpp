#include <iostream>
#include <string>

int main()
{
    // This program shows the getline() function, which reads an entire line of text from the user, including spaces    

    std::string fullName;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Hello, " << fullName << "!\n";

    return 0;
}