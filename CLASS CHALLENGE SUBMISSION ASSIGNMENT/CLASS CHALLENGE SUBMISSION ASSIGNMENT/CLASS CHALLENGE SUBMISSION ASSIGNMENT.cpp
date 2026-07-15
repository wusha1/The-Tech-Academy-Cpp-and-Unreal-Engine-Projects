#include <iostream>
#include <string>

using namespace std;

// Base class
class Shape
{
public:
    string color;

    // This function will be attained by other classes
    void getArea()
    {
        cout << "Getting the area of the shape." << endl;
    }
};

// Rectangle attained from Shape
class Rectangle : public Shape
{
public:
    int height;
    int width;
};

// Triangle attained from Shape
class Triangle : public Shape
{
public:
    int base;
    int height;
};

// Circle attained from Shape
class Circle : public Shape
{
public:
    int radius;
};

int main()
{
    // Creates a rectangle object
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

    // Displays the rectangle info
    cout << "Rectangle Color: " << rectangle.color << endl;
    rectangle.getArea();

    cout << endl;

    // Displays the triangle info
    cout << "Triangle Color: " << triangle.color << endl;
    triangle.getArea();

    cout << endl;

    // Displays the circle info
    cout << "Circle Color: " << circle.color << endl;
    circle.getArea();

    return 0;
}