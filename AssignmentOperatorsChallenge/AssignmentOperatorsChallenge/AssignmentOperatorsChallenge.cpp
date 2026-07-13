#include <iostream>

int main()
{
    // This shows 4 assignment operators that each will do things like assign value, add value

    int num = 10;
    int bitValue = 6; 

    num = 20;
    std::cout << "Assignment (=): " << num << "\n";

    num += 5;
    std::cout << "Addition Assignment (+=): " << num << "\n";

    bitValue &= 3; 
    std::cout << "Bitwise AND Assignment (&=): " << bitValue << "\n";

    num <<= 1;
    std::cout << "Left Shift Assignment (<<=): " << num << "\n";

    return 0;
}