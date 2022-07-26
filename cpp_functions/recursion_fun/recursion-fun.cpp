#include <iostream>

int k;

void valueofk()
{
    std::cout << "Enter the value of k: " << std::endl;
    std::cin >> k;
}

int myfun_sum(int k)
{
    if(k > 0)
    {
        return k + myfun_sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    valueofk();
    std::cout << "sum:" <<myfun_sum(k) << std::endl;
    return 0;
}
