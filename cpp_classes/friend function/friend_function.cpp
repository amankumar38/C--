#include <iostream>

class item
{
    int num_1, num_2;
    public:
        void getvalues();
        friend float mean(item s);
};

void item::getvalues()
{
    std::cout << "Enter frist number: " <<std::endl;
    std::cin >> num_1;
    std::cout << "Enter second number: " <<std::endl;
    std::cin >> num_2;
}

float mean(item s)
{
    return float(s.num_1 + s.num_2)/2.0;
}

int main(int argc, char const *argv[])
{
    item obj;
    obj.getvalues();
    std::cout << "Mean: " << mean(obj) <<std::endl;
    return 0;
}
