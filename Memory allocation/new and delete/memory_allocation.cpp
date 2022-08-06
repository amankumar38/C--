#include <iostream>

int main(int argc, char const *argv[])
{
    int *arr, size;

    std::cout << " Enter the size of array: " << std::endl;
    std::cin >> size;

    std::cout << " Creating array of size " << size << "..." << std::endl;
    arr = new int[size];

    std::cout <<" Dynamic allocation for memory of array 'arr' " << size << " successfull..." << std::endl;

    delete arr; 

    return 0;
}
