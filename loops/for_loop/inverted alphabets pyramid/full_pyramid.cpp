#include <iostream>

int main(int argc, char const *argv[])
{
    int space, row;

    std::cout << " Enter the number of rows: ";
    std::cin >> row;

    for(int i = 1, k = 0; i <= row; ++i, k = 0)
    {
        for(space = 1; space <= row-i; ++space)
        {
            std::cout << "  ";
        }
        while( k != 2*i-1)
        {
            std::cout << "* ";
            ++k;
        }
        std::cout << std::endl;

    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int space, rows;

//     cout <<"Enter number of rows: ";
//     cin >> rows;

//     for(int i = 1, k = 0; i <= rows; ++i, k = 0)
//     {
//         for(space = 1; space <= rows-i; ++space)
//         {
//             cout <<"  ";
//         }

//         while(k != 2*i-1)
//         {
//             cout << "* ";
//             ++k;
//         }
//         cout << endl;
//     }    
//     return 0;
// }
