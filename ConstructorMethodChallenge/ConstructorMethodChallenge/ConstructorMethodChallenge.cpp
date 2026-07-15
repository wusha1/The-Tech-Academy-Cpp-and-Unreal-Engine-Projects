#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;

    // Construct declaration
    Student(std::string studentName, int studentAge);
};

    // Constructor is outside the class
Student::Student(std::string studentName, int studentAge)
{
    name = studentName;
    age = studentAge;
}

int main()
{
    Student student("Victor", 25);

    std::cout << "Name: " << student.name << "\n";
    std::cout << "Age: " << student.age << "\n";

    return 0;
}