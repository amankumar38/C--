#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
    struct
    {
        long long myPhoneNum;
        std::string myName;
        int myAge;
    }mystruct;

    mystruct.myPhoneNum = 7206847388;
    mystruct.myName = "Aman kumar";
    mystruct.myAge = 28;

    std::cout << "Name:- " << mystruct.myName << std::endl;
    
    std::cout << "Phone No.:- " << mystruct.myPhoneNum << std::endl;
    
    std::cout << "Age :- " << mystruct.myAge << std::endl;
    return 0;
}
