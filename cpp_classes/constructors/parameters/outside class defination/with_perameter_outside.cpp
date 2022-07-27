#include <iostream>


class mycar
{
    public:
        std::string brand;
        std::string model;
        std::string color;
        int year;
    
    mycar(std::string w, std::string x, std::string y, int z);
};

mycar::mycar(std::string w, std::string x, std::string y, int z) 
    {
        brand = w;
        model = x;
        color = y;
        year = z;
    }
int main(int argc, char const *argv[])
{
    mycar mycarobj1(" BMW "," x5 ", " silver ", 2015);

    mycar mycarobj2(" Honda "," city "," white ", 2014);

    mycar mycarobj3(" Hundayi "," verna ","black ", 2017);

    std::cout << " Brand " << " Model " << " Color " << " Year " << std::endl;

    std::cout << mycarobj1.brand << " " << mycarobj1.model << " " << mycarobj1.color << " " << mycarobj1.year << std::endl;

    std::cout << mycarobj2.brand << " " << mycarobj2.model << " " << mycarobj2.color << " " << mycarobj2.year << std::endl;

    std::cout << mycarobj3.brand << " " << mycarobj3.model << " " << mycarobj3.color << " " << mycarobj3.year << std::endl;

    return 0;
}
