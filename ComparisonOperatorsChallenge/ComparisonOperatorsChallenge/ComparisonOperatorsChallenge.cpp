#include <iostream>

int main()
{
    // This shows 4 oprators which when displayed will show true or false

    int num1 = 10;
    int num2 = 5;

    std::cout << "num1 > num2: " << (num1 > num2) << "\n";
    std::cout << "num1 == num2: " << (num1 == num2) << "\n";
    std::cout << "num1 != num2: " << (num1 != num2) << "\n";
    std::cout << "num1 <= num2: " << (num1 <= num2) << "\n";

    return 0;
}