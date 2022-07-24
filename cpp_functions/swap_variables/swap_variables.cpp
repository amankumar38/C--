#include <iostream>
#include <string>

int first_num, second_num;

int swap_variables(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    return 0; 
}

int values()
{
    std::cout << "Enter the frist number: ";
    std::cin >> first_num;

    std::cout <<"Enter the second number: ";
    std::cin >> second_num;

    return 0;
}

int main(int argc, char const *argv[])
{
    values();
    std::cout <<"Before swap:" << std::endl;

    std::cout << first_num << " " << second_num << std::endl;

    swap_variables (first_num , second_num);

    std::cout <<"After swap:" << std::endl;
    std::cout << first_num << " " << second_num << std::endl;
    return 0;
}
