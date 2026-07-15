#include <iostream>
#include <string>

using namespace std;

// Base class
class Shape
{
public:
    string color;

    // This function will be inherited by the other classes
    void getArea()
    {
        cout << "Getting the area of the shape." << endl;
    }
};

// Rectangle inherits from Shape
class Rectangle : public Shape
{
public:
    int height;
    int width;
};

// Triangle inherits from Shape
class Triangle : public Shape
{
public:
    int base;
    int height;
};

// Circle inherits from Shape
class Circle : public Shape
{
public:
    int radius;
};

int main()
{
    // creates a rectangle object
    Rectangle rectangle;
    rectangle.color = "Blue";
    rectangle.height = 5;
    rectangle.width = 10;

    // Creates a triangle object
    Triangle triangle;
    triangle.color = "Green";
    triangle.base = 6;
    triangle.height = 8;

    // Creates a circle object
    Circle circle;
    circle.color = "Red";
    circle.radius = 4;

    // Displays the rectangle information
    cout << "Rectangle Color: " << rectangle.color << endl;
    rectangle.getArea();

    cout << endl;

    // Displays the triangle information
    cout << "Triangle Color: " << triangle.color << endl;
    triangle.getArea();

    cout << endl;

    // Displays the circle information
    cout << "Circle Color: " << circle.color << endl;
    circle.getArea();

    return 0;
}