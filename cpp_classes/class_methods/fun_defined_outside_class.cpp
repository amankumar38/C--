#include <iostream>

class myclass
{
    public:
        void method();
};

void myclass::method()
{
    std::cout << "car details." <<std::endl;
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
        
        void mycar();
};

void car::mycar()
{
    std::cout << " Brand: " << "BMW" <<std::endl;
    std::cout << " Model: " << "X5." <<std::endl;
    std::cout << " Color: " << "Blue." <<std::endl;
    std::cout << " Transmision mode: " << "Automatic." <<std::endl;
    std::cout << " Top Speed: " << "200 MPH." <<std::endl;
    std::cout << " Gears: " << "2." <<std::endl;
    std::cout << " Manufactring Year: " << "2015." <<std::endl;
    
}

int main(int argc, char const *argv[])
{
    myclass myclassobj;
    myclassobj.method();

    car mycarobj;
    mycarobj.mycar();

    return 0;
}
