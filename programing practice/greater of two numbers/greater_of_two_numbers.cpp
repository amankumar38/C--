#include <iostream>

int main(int argc, char const *argv[])
{
    int frist_number, second_number;

    std::cout << "Enter the frist number: " <<std::endl;
    std::cin >> frist_number;

    std::cout << "Enter the Second number: " <<std::endl;
    std::cin >> second_number;

    if(frist_number > second_number)
    {
        std::cout << "Greater is: " << frist_number << std::endl;
    }
    else{
        std::cout << "Greater is: " << second_number << std::endl;
    }

    return 0;
}
