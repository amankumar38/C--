#include <iostream>
#include <string>

int first_num = 15, second_num = 25;

int swap_variables(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    return 0;
}

int main(int argc, char const *argv[])
{
    
    std::cout <<"Before swap:" << std::endl;

    std::cout << first_num << " " <<second_num << std::endl;

    swap_variables (first_num , second_num);

    std::cout <<"After swap:" << std::endl;
    std::cout << first_num << " " << second_num << std::endl;
    return 0;
}
