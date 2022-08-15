#include <iostream>

class second; //declared later
class frist
{
    int frist_data;
    public:
        void setvalue();
        friend void sum(frist, second);
};

class second 
{
    int second_data;
    public:
        void setvalue();
        friend void sum(frist, second);
};

void frist::setvalue()
{
    std::cout << "Enter the frist number: " <<std::endl;
    std::cin >> frist_data;
}

void second::setvalue()
{
    std::cout << "Enter the second number: " <<std::endl;
    std::cin >> second_data;
}

void sum(frist obj_1, second obj_2)
{
    std::cout << "Sum of data values of frist and second object using friend function: " << obj_1.frist_data + obj_2.second_data;    
}

int main(int argc, char const *argv[])
{
    frist obj_a;
    second obj_b;

    obj_a.setvalue();
    obj_b.setvalue();
    sum(obj_a , obj_b);
    return 0;
}
