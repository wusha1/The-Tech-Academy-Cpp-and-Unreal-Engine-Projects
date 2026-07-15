#include <iostream>
#include <string>

class Person
{
    // This program shows the protected keyword by allowing the Student class to access the name variable inherited from the Person class.

protected:
    std::string name;
};

class Student : public Person
{
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