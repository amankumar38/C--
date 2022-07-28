#include <iostream>

class myClass{
    public:
        void myFunction()
            {
                std::cout << " Something in parent class.." << std::endl;
            }
};

class mySecondClass{
    public:
        void mySecondFunction()
        {
            std::cout << " Something in first child class.." << std::endl;
        }
};

class myThirdClass : public myClass , public mySecondClass {

};

int main(int argc, char const *argv[])
{
    myThirdClass myThirdClass_obj;
    myThirdClass_obj.myFunction();
    myThirdClass_obj.mySecondFunction();
    
    return 0;
}

