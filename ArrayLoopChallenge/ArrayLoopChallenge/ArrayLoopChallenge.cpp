#include <iostream>
#include <string>

int main()
{
    // This program shows how to loop through an array using a for loop

    std::string fruits[] = { "Apple", "Banana", "Orange", "Grapes" };

    for (int i = 0; i < 4; i++)
    {
        std::cout << fruits[i] << "\n";
    }

    return 0;
}