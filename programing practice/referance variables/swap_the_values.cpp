#include <iostream>

int frist_num, second_num;

int swap_variables(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    return 0;
}

void values()
{
    std::cout << "Enter the frist number: " << std::endl;
    std::cin >> frist_num;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> second_num;
}

int main(int argc, char const *argv[])
{
    values();

    std::cout << "Before swap: " << std::endl;

    std::cout << frist_num << " " << second_num << std::endl;;

    swap_variables(frist_num, second_num);

    std::cout << "After swap: " << std::endl;

    std::cout << frist_num << " " << second_num << std::endl;

    return 0;
}
