#include <iostream>

void sum()
{
    int arr[10], i, j, sum_of_elements;
    float average;
    std::cout << "Enter the element of array: "<< std::endl;
    for(i = 1; i <=10; i++)
    {
        arr[i] = rand();
    }
    std::cout << std::endl;

    for(j = 1; j <=10; j++)
    {
        std::cout  <<" " << arr[j];

        sum_of_elements += arr[j];
    }
    std::cout << std::endl;

    std::cout << "sum = " << sum_of_elements << std::endl;

    average = sum_of_elements / 2;

    std::cout << "average = " << average;
}

int main()
{
    sum();
    return 0;
}