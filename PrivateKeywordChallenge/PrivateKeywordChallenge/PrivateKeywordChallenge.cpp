#include <iostream>
#include <string>

class Student
{
    // This program shows how to create a constructor with a parameter and define it outside the class.


private:
    std::string name;

public:
    void setName(std::string studentName)
    {
        name = studentName;
    }

    void displayName()
    {
        std::cout << "Student: " << name << "\n";
    }
};

int main()
{
    Student student;

    student.setName("Victor");
    student.displayName();

    return 0;
}