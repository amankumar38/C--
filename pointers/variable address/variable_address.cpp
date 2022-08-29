#include <iostream>

class pointer
{
    int var1, var2, var3;
    public:
        void setdata();
        void display();
};

void pointer::setdata()
{
    std::cout << "Enter the frist variable: " <<std::endl;
    std::cin >> var1;

    std::cout << "Enter the second variable: " <<std::endl;
    std::cin >> var2;

    std::cout << "Enter the third variable: " <<std::endl;
    std::cin >> var3; 
}

void pointer::display()
{
    std::cout << "frist variable: " << &var1 <<std::endl;
    std::cout << "second variable: "<< &var2 <<std::endl;
    std::cout << "third variable: "<< &var3 <<std::endl;
}

int main(int argc, char const *argv[])
{
    pointer ptr;
    ptr.setdata();
    ptr.display();
    return 0;
}
