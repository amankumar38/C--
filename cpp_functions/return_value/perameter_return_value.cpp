#include <iostream>
#include <string>

int n;

int value_input()
{
    std::cout<<"Enter the value of n :" << std::endl;
    std::cin >> n;
    return n;
}
int fun_value( int x)
{
    value_input();
    return n + x;
}

int main(int argc, char const *argv[])
{
    std::cout <<fun_value(3);
    return 0;
}
