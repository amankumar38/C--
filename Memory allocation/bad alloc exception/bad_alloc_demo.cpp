#include <iostream>

class sample{
    private:
        int data1;
        char data2;

    public:
        void setdata(int i, char c)
        {
            data1 = i;
            data2 = c;
        }

        void display_data(){
            std::cout << "data1: "<< data1 << std::endl;
            std::cout << "data2: " << data2 << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    sample *smpl;

    try
    {
        smpl = new sample;
    }
    catch(std::bad_alloc ba)
    {
        std::cout << "Bad allocation occured... the program will terminate now..." << std::endl;
        return 1;
    }

    smpl->setdata(25, 'A');
    smpl->display_data();

    delete smpl;
    
    return 0;
}