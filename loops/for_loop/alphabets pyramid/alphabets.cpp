#include <iostream>

int main(int argc, char const *argv[])
{
    char input, alphabets = 'A';
    std::cout << "Enter the Uppercase character you want to print in the last row: " << std::endl;
    std::cin >> input;

    for( int i = 1; i <= (input - 'A' + 1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout<< alphabets <<" ";
        }
        ++alphabets;

        std::cout << std::endl;
    }
    return 0;
}
