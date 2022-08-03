#include <iostream>
#include <cmath>

class calculation{
    public:
         float  a,b,c,x;
    
    void values()
    {
        std::cout << "Enter the value of a: " << std::endl;
        std::cin >> a;

        std::cout << "Enter the value of b: " << std::endl;
        std::cin >> b;

        std::cout << "Enter the value of c: " << std::endl;
        std::cin >> c;
    }

    void output()
    {
        if ((b-c) != 0){
            x = a / b - c;
            std::cout << x << std::endl;
        }
        else
        {
            std::cout << "Infinity" << std::endl;
        }
        
    }
};

int main(int argc, char const *argv[])
{
    calculation result;

    result.values();
    result.output();
    return 0;
}
