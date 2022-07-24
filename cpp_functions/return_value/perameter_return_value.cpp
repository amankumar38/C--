#include <iostream>
#include <string>

int n;

int input_fun()
{
    std::cout <<" Enter the value " << std::endl;
    std::cin >> n ;
    return n;
}

int fun_value(int x)
{
    input_fun();
    return n + x;
}

int main(int argc, char const *argv[])
{
    std::cout << fun_value(39);
    return 0;
}
