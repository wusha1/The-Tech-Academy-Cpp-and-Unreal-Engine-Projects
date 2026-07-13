#include <iostream>
#include <string>

int main()
{
    // This declares the variables used
    char grade = 'A';
    int age = 25;
    double price = 19.99;
    bool isStudent = true;
    std::string name = "Victor";

    // Multiple variables
    int x = 10, y = 20, z = 30;

    // Displays the values
    std::cout << "Grade: " << grade << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Price: " << price << "\n";
    std::cout << "Student: " << isStudent << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Multiple integers: " << x << ", " << y << ", " << z << "\n";

    return 0;
}