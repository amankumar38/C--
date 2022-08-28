#include <iostream>

class sample
{
    int x, y, z;

public:
    sample() {}
    void getdata(int a, int b, int c);
    void display();
    void operator-();
};

void sample::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void sample::display()
{
    std::cout << "x = " << x << " ";
    std::cout << "y = " << y << " ";
    std::cout << "z = " << z << std::endl;
}

void sample::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    sample s;
    s.getdata(10, 20, 30);

    std::cout << "S = ";
    s.display();

    -s;
    std::cout << "-S = ";
    s.display();

    return 0;
}