#include <iostream>

int main(int argc, char const *argv[])
{
    float arr[50];

    float *ptr;

    std::cout << "Display address of array using pointer " << std::endl;

    for(int i = 0; i <= 50; ++i)
    {
        std::cout << "&arr[" << i << "] " << &arr[i] <<std::endl;
    }
    //'ptr = &arr[0];' same as 'ptr = arr;';
    ptr = arr;
    for(int i = 0; i <= 50; ++i)
    {
        std::cout << "ptr + " << i << " = "<< ptr + i <<std::endl;
    }
    
    return 0;
}
