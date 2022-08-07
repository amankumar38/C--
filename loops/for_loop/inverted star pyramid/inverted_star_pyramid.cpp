#include <iostream>

int main(int argc, char const *argv[])
{
    int row;

    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> row;

    for(int i = row; i >= 1; --i)
    {
        for ( int j = 1; j <= i; ++j)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    return 0;
}
