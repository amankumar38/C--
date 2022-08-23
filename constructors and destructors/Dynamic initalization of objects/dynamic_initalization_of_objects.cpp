#include <iostream>

class fixed_diposit
{
    long int principal_amount;
    int years;
    float rate, return_value;

    public:
        fixed_diposit(){}
        fixed_diposit(long int p, int y, float = 0.12);
        fixed_diposit(long int p, int y, int r);
        void display();
};
fixed_diposit::fixed_diposit(long int p, int y, float r)
{
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;
    for(int i = 1; i <= y; i++)
    {
        return_value *= (1.0 + r);
    }
}

fixed_diposit::fixed_diposit(long int p, int y, int r)
{
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;

    for(int i = 0; i <=y; i++)
    {
        return_value *= (1.0 + float(r) / 100);
    }
}

void fixed_diposit::display()
{
    std::cout << "\n";
    std::cout << "Principal Amount = " << principal_amount << "\n";
    std::cout << "Return value = " << return_value << "\n";
}

int main()
{
    fixed_diposit fd1, fd2, fd3;
    long int p;
    int y;
    float r;
    int R;

    std::cout << "Enter amount, period, interest rate(in percent)" <<std::endl;
    std::cin >> p >> y >> R;
    fd1 = fixed_diposit(p,y,R);

    std::cout << "Enter amount, period, interest rate(in decimal)" <<std::endl;
    std::cin >> p >> y >> r;
    fd2 = fixed_diposit(p,y,r);

    std::cout << "Enter amount and period" <<std::endl;
    std::cin >> p >> y;
    fd3 = fixed_diposit(p,y);

    std::cout << "\nDeposit 1: ";
    fd1.display();

    std::cout << "\nDeposit 2: ";
    fd2.display();

    std::cout << "\nDeposit 3: ";
    fd3.display();



    return 0;
}