#include <iostream>
#define pi 3.14

int area_of_square(int);
int area_of_rectangle(int, int);
double area_of_circle(double);

int side, lenght, breadth;
double radius;
void square()
{

    std::cout << "Enter the side of square: " << std::endl;
    std::cin >> side;
}

void rectangle()
{
    std::cout << "Enter the lenght of reactangle: " << std::endl;
    std::cin >> lenght;
    std::cout << "Enter the breadth of rectangle: " << std::endl;
    std::cin >> breadth;
}

void circle()
{
    std::cout << "Enter the radius of circle: " << std::endl;
    std::cin >> radius;
}

int area_of_square(int side)
{
    return side * side;
}

int area_of_reactnagle(int length, int breadth)
{
    return lenght * breadth;
}

double area_of_circle(double radius)
{
    return pi * radius * radius;
}

int main()
{
    square();

    std::cout << "Area of square of side " << side << " is = " << area_of_square(side) << std::endl;

    rectangle();
    std::cout << "Area of rectangle of length " << lenght << " breadth " << breadth << " is = " << area_of_reactnagle(lenght, breadth) << std::endl;

    circle();
    std::cout << "Area of circle of " << radius << " is = " << area_of_circle(radius) << std::endl;
}