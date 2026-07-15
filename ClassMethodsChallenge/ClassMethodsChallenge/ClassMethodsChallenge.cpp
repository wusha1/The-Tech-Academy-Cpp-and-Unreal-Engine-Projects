#include <iostream>
#include <string>

class Student
{
public:
    std::string name;

    // Function defined inside the class
    void displayName()
    {
        std::cout << "Student: " << name << "\n";
    }

    void greet();
};

// Function defined outside the class
void Student::greet()
{
    std::cout << "Welcome to the class methods challenge!\n";
}

int main()
{
    Student student;

    student.name = "Victor";

    student.displayName();
    student.greet();

    return 0;
}