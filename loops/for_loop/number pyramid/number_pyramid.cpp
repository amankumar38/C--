#include <iostream>

int main(int argc, char const *argv[])
{
    int row;

    std::cout << "Enter row numbers: " << std::endl;
    std::cin >> row;

    for(int i = 1; i <= row; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout<< j << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
