#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;
};

int main()
{
    // This Creates multiple objects
    Student student1;
    student1.name = "Victor";
    student1.age = 25;

    Student student2;
    student2.name = "Charlie";
    student2.age = 24;

    std::cout << student1.name << " is " << student1.age << " years old.\n";
    std::cout << student2.name << " is " << student2.age << " years old.\n";

    return 0;
}