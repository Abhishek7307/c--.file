//Practical 2: A point on the two dimensional plane can be represented by two numbers: an X coordinate and a Y coordinate.  For example, (4,5) represents a point 4 units to the right of the origin along the X axis and 5 units up the Y axis.  The sum of two points can be defined as a new point whose X coordinate is the sum of the X coordinates of the points and whose Y coordinate is the sum of their Y coordinates.
//Write a program that uses a structure called point to model a point.  Define three points, andhavethe user input values to two of them.  Then set the third point equal to the sum of the other two, and display the value of the new point.  Interaction with the program might look like this:
//Enter coordinates for P1:	3    4
//Enter coordinates for P2:	5    7
//Coordinates of P1 + P2 are :   8, 11
//Abhishek TRipathi
//1/22/FET/BCS/220
#include <iostream>

// Define a structure to represent a point
struct Point {
    double x;
    double y;
};

int main() {
    Point p1, p2, p3;

    // Get coordinates for the first point (p1)
    std::cout << "Enter coordinates for P1: ";
    std::cin >> p1.x >> p1.y;

    // Get coordinates for the second point (p2)
    std::cout << "Enter coordinates for P2: ";
    std::cin >> p2.x >> p2.y;

    // Calculate the sum of the two points and store it in p3
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    // Display the result
    std::cout << "Coordinates of P1 + P2 are: " << p3.x << ", " << p3.y << std::endl;

    return 0;
}
