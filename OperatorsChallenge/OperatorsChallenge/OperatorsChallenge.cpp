#include <iostream>

int main()
{
    //This shows 5 common operators along with the updated value which will aslo show in the console 

    int num1 = 10;
    int num2 = 5;

    std::cout << "Addition: " << num1 + num2 << "\n";
    std::cout << "Subtraction: " << num1 - num2 << "\n";
    std::cout << "Multiplication: " << num1 * num2 << "\n";
    std::cout << "Division: " << num1 / num2 << "\n";

    num1++;
    std::cout << "Increment: " << num1 << "\n";

    return 0;
}