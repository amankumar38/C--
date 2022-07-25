#include <iostream>

void myfun(int myfunarray[5])
{
    for(int i = 0; i <5; i++)
    {
        std::cout <<myfunarray[i] << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    int myfunarray[5] = {5,10,15,20,25};
    myfun(myfunarray);
    return 0;
}
