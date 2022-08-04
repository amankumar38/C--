#include <iostream>

enum shapes{
    circle,
    rectangle,
    triangle
};

int main(int argc, char const *argv[])
{
    int code;
    std::cout << " Enter the shape code: " <<std::endl;
    std::cin >> code;

    while(code >= circle && code <= triangle)
    {
        switch(code)
        {
            case circle:
            std::cout << "you choose circle..." << std::endl;
            break;

            case rectangle:
            std::cout << "you choose rectangle..." << std::endl;
            break;

            case triangle:
            std::cout << "you choose triangle..." << std::endl;
            break;
        }
        std::cout << "Enter the shape code." << std::endl;
        std::cin >> code;
    }

    std::cout << " Bye " << std::endl;
    
    return 0;
}
