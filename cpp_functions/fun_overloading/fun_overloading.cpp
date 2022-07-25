#include<iostream>

int x , y;

int myfun(int x, int y)
{
    return x + y;
}

double myfun(double x , double y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    // input();
    
    std::cout << "Int: " << myfun(3, 4) << std::endl;
    std::cout << "Double: " << myfun(3.4, 4.5) << std::endl;
    return 0;
}
