#include <iostream>
#include <string>

// Base class
class Person
{
protected:
    std::string name;
};

// Student inherits from Person
class Student : public Person
{
public:
    void setName(std::string studentName)
    {
        name = studentName;
    }
};

// Graduate student inherits from Student
class GraduateStudent : public Student
{
public:
    void displayName()
    {
        std::cout << "Graduate Student: " << name << "\n";
    }
};

// Second base class
class Employee
{
public:
    void displayJob()
    {
        std::cout << "Job: Teaching Assistant\n";
    }
};

// Teaching assistant inherits from two base classes
class TeachingAssistant : public GraduateStudent, public Employee
{
};

int main()
{
    TeachingAssistant assistant;

    assistant.setName("Victor");
    assistant.displayName();
    assistant.displayJob();

    return 0;
}