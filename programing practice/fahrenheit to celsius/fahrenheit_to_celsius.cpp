#include <iostream>

class temprature{
    public:
         float C, F;

    void fahrenheit()
    {
        std::cout << "Enter the Fahrenhiet: " <<std::endl;
        std::cin >> F;
    }

    void fahrenheit_to_celsius()
    {
        C = (F - 32) * 0.5556 ;
        std::cout<< "Celsius: " << C << std::endl;
    }
    
};
int main(int argc, char const *argv[])
{
    temprature myObj;
    myObj.fahrenheit();
    myObj.fahrenheit_to_celsius();

    return 0;
}
