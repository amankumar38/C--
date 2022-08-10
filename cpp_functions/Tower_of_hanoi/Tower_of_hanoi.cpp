#include <iostream>

void TOH(int d, char tower1, char tower2, char tower3)
{
    if (d == 1)
    {
        std::cout << "shift top disk from " << tower1 << " to " << tower2 << std::endl;
        return;
    }
    TOH(d-1, tower1, tower3, tower2);
    std::cout << "shift top disk from " << tower1 << " to " << tower2 << std::endl;

    TOH(d-1, tower3, tower2, tower1);
}

int main(int argc, char const *argv[])
{
    int disk;

    std::cout << "Enter the number of disk: " << std::endl;
    std::cin >> disk;

    if(disk < 1)
    {
        std::cout << "there is no disk left to shift." <<std::endl;
    }
    else
    {
        std::cout << "There are " << disk << " disk in tower 1." << std::endl;
    }

    TOH(disk, '1' ,'2','3');
    std::cout << disk << " disk in tower 1 are shifted to tower 2." << std::endl;
    return 0;
}
