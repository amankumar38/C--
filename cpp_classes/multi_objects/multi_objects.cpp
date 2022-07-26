#include <iostream>

class myclass
{
  public:
      std::string brand_name;
      std::string model_name;
      int manufacturing_year;
    
    void input()
        {
            std::cout << " Enter the brand name: " << std::endl;
            std::cin >> brand_name;

            std::cout << " Enter the model name: " << std::endl;
            std::cin >> model_name;

            std::cout << " Enter the manufacturing year: " << std::endl;
            std::cin >> manufacturing_year;
        }
};

int main(int argc, char const *argv[])
{
    myclass myobj, myobj2;

    myobj.input();

    myobj2.input();

    std::cout << "Brand" << " " << "Model" << " " << "Year" << std::endl;

    std::cout << myobj.brand_name << " " << myobj.model_name << " " << myobj.manufacturing_year << std::endl;

    std::cout << myobj2.brand_name << " " << myobj2.model_name << " " << myobj2.manufacturing_year << std::endl;

    return 0;
}

