#include <iostream>

class myclass
{
    public:
        myclass()
        {
            std::cout << "hello constructor.." <<std::endl;
        }
};

int main(int argc, char const *argv[])
{
    myclass myobj;

    return 0;
}
