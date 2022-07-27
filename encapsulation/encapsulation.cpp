#include <iostream>

int s;

class employee
{
    private: //cannot accessed by outsider
        int salary;

    public: //can accessed by outsider
        
        void setsalary(int s)
        {
            std::cout << " Enter the salary of Employee: " << std::endl;
            std::cin >> s;
            salary = s;
        }

        int getsalary()
        {
            return salary;
        }
};

int main(int argc, char const *argv[])
{
    employee emp_obj;
    emp_obj.setsalary(s);

    std::cout << "Salary :" <<emp_obj.getsalary();

    return 0;
}
