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
    animal myAnimals;
    dog myDog;
    cow myCow;

    myAnimals.animalSound();
    myDog.animalSound();
    myCow.animalSound();
    
    return 0;
}
