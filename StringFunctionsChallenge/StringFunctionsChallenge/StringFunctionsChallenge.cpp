#include <iostream>
#include <string>

int main()
{
    //This shows 3 string operations

    std::string message = "Technology";

    // This display the length of the string
    std::cout << "Length: " << message.length() << "\n";

    // This displays the third character
    std::cout << "Third character: " << message[2] << "\n";

    // This changes a specific character
    message[0] = 't';

    std::cout << "Updated string: " << message << "\n";

    return 0;
}