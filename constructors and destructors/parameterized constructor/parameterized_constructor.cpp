#include <iostream>

int x,y;
class sample
{
    int frist_num, second_num;
    public:
        
        sample(int num1, int num2);
        void display();
};

sample::sample(int num1 , int num2)
{
    frist_num = num1;
    second_num = num2;
}

void sample::display()
{
    std::cout << "("<< frist_num << "," << second_num << ")";
}

int main(int argc, char const *argv[])
{
    sample s1(1,1);
    sample s2(5, 50);

    std::cout << "Point S1 = ";
    s1.display();
    std::cout << std::endl;
    std::cout << "Point S2 = ";
    s2.display();
    std::cout << std::endl;

    return 0;
}