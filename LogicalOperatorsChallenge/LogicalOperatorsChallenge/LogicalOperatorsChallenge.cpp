#include <iostream>

int main()
{
    // The following are 3 logical operators

    bool isStudent = true;
    bool hasHomework = false;

    std::cout << "isStudent && hasHomework: " << (isStudent && hasHomework) << "\n";

    std::cout << "isStudent || hasHomework: " << (isStudent || hasHomework) << "\n";

    std::cout << "!isStudent: " << (!isStudent) << "\n";

    return 0;
}