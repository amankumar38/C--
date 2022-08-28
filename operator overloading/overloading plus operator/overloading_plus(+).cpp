#include <iostream>

class complex
{
    float x, y;

public:
    complex() {}
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    complex operator+(complex);
    void display();
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex::display()
{
    std::cout << x << " +j" << y << std::endl;
}

int main()
{
    complex c1, c2, c3;
    c1 = complex(2.5, 3.7);
    c2 = complex(2.7, 3.7);
    c3 = c1 + c2;

    std::cout << "C1 = ";
    c1.display();
    std::cout << "C2 = ";
    c2.display();
    std::cout << "C3 = ";
    c3.display();
    return 0;
}