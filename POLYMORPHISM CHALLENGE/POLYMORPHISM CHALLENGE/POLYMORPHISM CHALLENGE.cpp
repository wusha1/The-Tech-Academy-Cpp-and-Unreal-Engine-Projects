#include <iostream>

// Base class
class Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "The animal makes a sound.\n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "The dog barks.\n";
    }
};

// Derived class
class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "The cat meows.\n";
    }
};

int main()
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}