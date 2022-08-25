#include <iostream>

int count = 0;

class test
{
    public:
        test()
        {
            count++;
            std::cout << "\nCounstructor Msg: object number " << count << " Created: .";
        }
        ~test()
        {
            std::cout << "\nCounstructor Msg: object number " << count << " Destroyed: .";
            count--;
        }
};

int main()
{
    std::cout << "Inside the main block..";

    std::cout << "\n\nCreating frist object T1.." <<std::endl;

    test T1;
    {
        std::cout << "\n";
        std::cout << "Inside block 1.." <<std::endl;
        std::cout << "Creating two more objects T2, T3.."<<std::endl;
        test T2, T3;
        std::cout << "\n";
        std::cout << "Leaving Block 1..." << std::endl;
    }

    std::cout << "\n";
    std::cout << "Back inside main block.." <<std::endl;
    return 0;
}