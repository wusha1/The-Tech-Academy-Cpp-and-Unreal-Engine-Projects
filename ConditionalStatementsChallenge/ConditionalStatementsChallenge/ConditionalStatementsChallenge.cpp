#include <iostream>

int main()
{
    // The following statements show the if, else, and else if statements that execute different parts of code 
    //depending on whether a condition is true or false

    int number = 10;
    int day = 3;

    if (number > 5)
    {
        std::cout << "The number is greater than 5.\n";
    }

    if (number < 5)
    {
        std::cout << "The number is less than 5.\n";
    }
    else
    {
        std::cout << "The number is not less than 5.\n";
    }

    if (number < 5)
    {
        std::cout << "Number is less than 5.\n";
    }
    else if (number == 10)
    {
        std::cout << "The number is exactly 10.\n";
    }
    else
    {
        std::cout << "The number is greater than 10.\n";
    }

    switch (day)
    {
    case 1:
        std::cout << "Monday\n";
        break;
    case 2:
        std::cout << "Tuesday\n";
        break;
    case 3:
        std::cout << "Wednesday\n";
        break;
    default:
        std::cout << "Another day\n";
        break;
    }

    std::string result = (number >= 10) ? "Pass" : "Fail";
    std::cout << "Result: " << result << "\n";

    return 0;
}