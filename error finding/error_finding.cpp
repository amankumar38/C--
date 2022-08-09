#include <iostream>
#define pi 3.14

int squareArea(int &);
int circleArea(int &);

int main()
{
    int a = 10;
    int r = 50;
    std::cout << " Area of squre: " << squareArea(a) << std::endl;
    std::cout << " Area of circle: "<<circleArea(r) << std::endl;

}

int squareArea(int &a)
{
    return a *= a;
}

int circleArea(int &r)
{
    return r = pi * r * r;
}