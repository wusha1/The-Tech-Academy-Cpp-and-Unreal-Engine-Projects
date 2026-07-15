#include <iostream>
#include <string>

using namespace std;

// Dog class
class Dog
{
public:
    // Properties
    string breed;
    string color;
    string height;
    string weight;

    // Methods
    void shake()
    {
        cout << "The dog shakes." << endl;
    }

    void sit()
    {
        cout << "The dog sits." << endl;
    }

    void layDown()
    {
        cout << "The dog lays down." << endl;
    }
};

int main()
{
    // Creates a dog object
    Dog dog;

    // Gives the dog its properties
    dog.breed = "Hound";
    dog.color = "Brown";
    dog.height = "2 feet";
    dog.weight = "60 pounds";

    // Displays the properties
    cout << "Breed: " << dog.breed << endl;
    cout << "Color: " << dog.color << endl;
    cout << "Height: " << dog.height << endl;
    cout << "Weight: " << dog.weight << endl << endl;

    // Calls the methods
    dog.shake();
    dog.sit();
    dog.layDown();

    return 0;
}