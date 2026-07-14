#include <iostream>

int main()
{
    int number = 25;

    // The varible reference acts as another name for a number
    int& reference = number;

    std::cout << "Original value: " << number << "\n";
    std::cout << "Reference value: " << reference << "\n";

    return 0;
}