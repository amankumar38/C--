#include <iostream>

class employee{
    private:
        int salary, age , bonus;
        std::string name;
    
    public:
        void setdata()
        {
            std::cout << " Enter the employee name: " <<std::endl;
            std::cin >> name;
        
            std::cout << " Enter the employee age: " <<std::endl;
            std::cin >> age;

            std::cout << " Enter the employee salary: " <<std::endl;
            std::cin >> salary;
        
            std::cout << " Enter the employee bonus: " <<std::endl;
            std::cin >> bonus;
        }

        void display_data()
        {
            std::cout << "Employee name: " << name << std::endl;

            std::cout << "Employee age: " << age << std::endl;

            std::cout << "Employee salary: " << salary << std::endl;

            std::cout << "Employee bonus: " << bonus << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    employee emp_obj;

    emp_obj.setdata();

    emp_obj.display_data();
    
    return 0;
}
