#include <iostream>

class animal
{
    public:
        void animalSound()
        {
            std::cout << " Sound of animals.... " <<std::endl;
        }
};
class dog: public animal{
    public:
        void animalSound()
        {
            std::cout << " Sound of dog is : bhaw bhaw! " <<std::endl;
        }
};

class cow : public animal{
    public:
        void animalSound()
        {
            std::cout << " Sound of cow is : mow mow! " <<std::endl;
        }
};

int main(int argc, char const *argv[])
{
    animal myAnimal;
    dog myDog;
    cow myCow;

    myAnimal.animalSound();
    myDog.animalSound();
    myCow.animalSound();
    
    return 0;
}
