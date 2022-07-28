#include <iostream>

int s;

class Employee
{
    protected:
        int salary;
};

class derived : public Employee
{
    public:
        int bonus;
        
        void setsalary(int s){
            std::cout << "What is your salary:" << std::endl;
            std::cin >> s;
            salary = s;
        }

        int getsalary(){
            return salary;
        }
};



int main(int argc, char const *argv[])
{
    derived myobj;
    myobj.setsalary(s);
    myobj.bonus = 200000;

    std::cout << "Salary = " <<myobj.getsalary() << std::endl;
    std::cout << "Bonus = " << myobj.bonus << std::endl;
    
    return 0;
}
