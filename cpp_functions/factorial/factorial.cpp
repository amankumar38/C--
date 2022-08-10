#include <iostream>
long double fact(int n)
{
    if (n == 0){
        return 1;
    }

    return (n * fact(n-1));

}

int main(int argc, char const *argv[])
{
    int num;

    std::cout << "Enter the number: " <<std::endl;
    std::cin >> num;

    
    std::cout << "Factorial of " << num << " is = " << fact(num);    
    return 0;
}
