#include <iostream>
#include <cmath> // For M_PI and std::pow
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to draw the shape
    virtual void draw() const = 0;
    
    // Pure virtual function to calculate the area
    virtual double calculateArea() const = 0;
    
    // Virtual destructor
    virtual ~Shape() {}
};

// Concrete class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }

    double calculateArea() const override {
        return M_PI * std::pow(radius, 2);
    }
};

// Concrete class for Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        cout << "Drawing a Rectangle with width " << width << " and height " << height << endl;
    }

    double calculateArea() const override {
        return width * height;
    }
};

// Concrete class for Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() const override {
        cout << "Drawing a Triangle with base " << base << " and height " << height << endl;
    }

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

// Main function to demonstrate drawing shapes and calculating areas
int main() {
    // Create instances of different shapes
    Shape* shapes[] = {
        new Circle(5.0),
        new Rectangle(4.0, 6.0),
        new Triangle(3.0, 7.0)
    };

    // Draw shapes and calculate areas
    for (Shape* shape : shapes) {
        shape->draw();
        cout << "Area: " << shape->calculateArea() << endl;
        cout << endl;  // Add a blank line for readability
    }

    // Clean up allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}