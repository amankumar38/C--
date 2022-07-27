#include <iostream>

class myclass
{
    public:
        void method();
};

void myclass::method()
{
    std::cout << "Method." <<std::endl;
}

class car
{
    public:
        std::string brand;
        std::string model;
        std::string color;
        std::string transmission;
        int maxspeed;
        int gears;
        int manufactring_year; 
        
        int mycar(std::string brand,
            std::string model,
            std::string color,
            std::string transmission,
            int maxspeed,
            int gears,
            int manufactring_year );
};

int car::mycar(std::string brand, std::string model, std::string color, std::string transmission, int maxspeed, int gears, int manufactring_year )
{
    std::cout << "BMW" <<std::endl;
    std::cout << "X5." <<std::endl;
    std::cout << "Blue." <<std::endl;
    std::cout << "Automatic." <<std::endl;
    std::cout << "200." <<std::endl;
    std::cout << "2." <<std::endl;
    std::cout << "2015." <<std::endl;

}

int main(int argc, char const *argv[])
{
    myclass myclassobj;
    myclassobj.method();

    car mycarobj;
    mycarobj.mycar("barnd", " X5 "," Blue "," Automatic ", 200 , 2 , 2015);

    return 0;
}
