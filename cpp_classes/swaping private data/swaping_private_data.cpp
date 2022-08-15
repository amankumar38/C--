#include <iostream>

class second;
class frist
{
    int value1;

public:
    void setdata();
    void display();
    friend void exchange(frist &, second &);
};

class second
{
    int value2;

public:
    void setdata();
    void display();
    friend void exchange(frist &, second &);
};

void frist::setdata()
{
    std::cout << "Enter the frist number: " << std::endl;
    std::cin >> value1;
}

void frist::display()
{
    std::cout << "Frist number: " << value1<< std::endl;
}

void second::setdata()
{
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> value2;
}

void second::display()
{
    std::cout << "Second number: " << value2 << std::endl;
}


void exchange( frist & obj1, second & obj2)
{
    int z = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = z;
}

int main()
{
    frist obj_1;
    second obj_2;

    obj_1.setdata();
    obj_2.setdata();

    std::cout << "Before swapping.. " << std::endl;
    obj_1.display();
    obj_2.display();

    exchange(obj_1, obj_2);
    
    std::cout << "After swapping.. " << std::endl;
    obj_1.display();
    obj_2.display();

    return 0;
}