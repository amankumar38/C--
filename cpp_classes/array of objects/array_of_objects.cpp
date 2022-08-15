#include <iostream>

class employee
{
    char name[30];
    int age;

public:
    void getdata();
    void displaydata();
};

void employee::getdata()
{
    std::cout << "Enter Employee name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter Employee age: " << std::endl;
    std::cin >> age;
}

void employee::displaydata()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

const int size = 3;

int main(int argc, char const *argv[])
{
    employee manager[3];
    for(int i = 0; i < size; i++)
    {
        std::cout << "Deatils of Manager " << i+1 <<std::endl;
        manager[i].getdata();
    }
    std::cout <<std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << " Manager " << i+1 <<std::endl;
        manager[i].displaydata();
    }
    
    return 0;
}
