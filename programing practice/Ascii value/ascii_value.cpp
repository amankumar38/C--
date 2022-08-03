#include <iostream>

int main(int argc, char const *argv[])
{
    char c;
    std::cout << "Enter the character: " << std::endl;
    std::cin >> c;

    std::cout << "The ASCII value of " << c << " is " << int(c) <<std::endl;

    return 0;
}
