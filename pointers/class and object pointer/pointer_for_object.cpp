#include <iostream>

class student
{
    int age;
    public:
        student(){}
        void getage()
        {
            std::cout << "Enter the age of student: " <<std::endl;
            std::cin >> age;
        }
        void displayage()
        {
            std::cout << "Age: " << age <<std::endl;
        }
};

int main(int argc, char const *argv[])
{
    student* ptr = new student();

    ptr->getage();
    ptr->displayage();

    delete ptr;
    return 0;
}
