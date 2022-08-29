#include <iostream>

class pointer
{
    int var;
    int *pointvar;

public:
    void getvarvalue();
    void displayvar();
};

void pointer::getvarvalue()
{
    std::cout << "Enter the value of variable: " << std::endl;
    std::cin >> var;
}

void pointer::displayvar()
{
    pointvar = &var;

    std::cout << "Var: " << var << std::endl;

    std::cout << "Var address: " << pointvar << std::endl;

    std::cout << "pointVar: " << *pointvar << std::endl;

     std::cout << "value changing...." << std::endl;

    std::cout << "enter new value " << std::endl;

    std::cin >> *pointvar;

    std::cout << "Var: " << var << std::endl;

    std::cout << "Var address: " << &var << std::endl;

    std::cout << "pointVar: " << *pointvar << std::endl;    
    
}

int main(int argc, char const *argv[])
{
    pointer ptr;
    ptr.getvarvalue();
    ptr.displayvar();
    return 0;
}
