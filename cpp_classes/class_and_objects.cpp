#include <iostream>

class myclass
{
    public:
        std::string name;
        std::string passion;
        std::string gender;
        int age;

    void myclassfun()
    {
        std::cout << "Enter the name: " << std::endl;
        std::cin >> name;

        std::cout << "Enter the age: " << std::endl;
        std::cin >> age;

        std::cout << "Enter the gender: " << std::endl;
        std::cin >> gender;

        std::cout << "Enter the passion: " << std::endl;
        std::cin >> passion;
    }
};

int main(int argc, char const *argv[])
{
    myclass myobj;

    myobj.myclassfun();

    std::cout << "Hello";
    std::cout << myobj.name << std::endl;
    std::cout << myobj.age << std::endl;
    std::cout << myobj.gender << std::endl;
    std::cout << myobj.passion << std::endl;

    return 0;
}
