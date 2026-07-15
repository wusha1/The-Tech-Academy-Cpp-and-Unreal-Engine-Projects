#include <iostream>
#include <string>

class Dog
{
    // This program shows a dog class with the same properties and behaviors from the image provided

public:
    // Properties and states
    std::string breed;
    std::string color;
    std::string height;
    std::string weight;

    // Methods and behaviors
    void shake()
    {
        std::cout << "The dog shakes.\n";
    }

    void sit()
    {
        std::cout << "The dog sits.\n";
    }

    void layDown()
    {
        std::cout << "The dog lays down.\n";
    }
};

int main()
{
    // Creates an object from the Dog class
    Dog dog;

    // Gives the object its state
    dog.breed = "Hound";
    dog.color = "Brown";
    dog.height = "2 feet";
    dog.weight = "60 pounds";

    // This displays the object's properties
    std::cout << "Breed: " << dog.breed << "\n";
    std::cout << "Color: " << dog.color << "\n";
    std::cout << "Height: " << dog.height << "\n";
    std::cout << "Weight: " << dog.weight << "\n\n";

    // Calls the object's methods
    dog.shake();
    dog.sit();
    dog.layDown();

    return 0;
}