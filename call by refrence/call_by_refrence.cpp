#include <iostream>

void fun(int &x)
{
    x = x + 10;
}
int main(int argc, char const *argv[])
{
    int m;
    std::cout << "Value of m :" << std::endl;
    std::cin >> m;

    fun(m);

    std::cout << m;

    return 0;
}
