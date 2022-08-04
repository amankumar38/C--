#include <iostream>


int m = 10;   // global declaration

int main(int argc, char const *argv[])
{
    int m = 20;   // local declaration
    {
        int k = 20;
        int m = 30;   // local to inner block

        std::cout << "We are in inner block." << std::endl;
        std::cout << "K: " << k << std::endl;                           //display value of k in inner block
        std::cout << "M: " << m << std::endl;                           //display value of m in inner block

        std::cout << "Global M: " << ::m << std::endl;                  //display value of global m 
    }
    std::cout << "We are in inner block." << std::endl;
    std::cout << "M: " << m << std::endl;                               //display value of m in outter block
    std::cout << "Global M: " << ::m << std::endl;                      //display value of global m 

    return 0;
}
