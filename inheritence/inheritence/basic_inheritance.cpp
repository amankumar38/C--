#include <iostream>

class myvehicle{
public:
    std::string brand;
    std::string model;

void carbrand()
{
    std::cout << "Name the brand: " << std::endl;
    std::cin >> brand;
}

void honk()
    {
        for(int ii = 0; ii <= 10; ii++)
        {
            std::cout << "pom! pom! pom!" << std::endl;
        }
    }
};

class car : public myvehicle
{
    public:
        void carmodel()
            {
                std::cout << "Name the Model: " << std::endl;
                std::cin >> model;
            }
};

int main(int argc, char const *argv[])
{
    car mycarobj;

    mycarobj.carbrand();
    mycarobj.carmodel();
    mycarobj.honk();

    return 0;
}


