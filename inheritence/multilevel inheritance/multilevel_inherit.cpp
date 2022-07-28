#include <iostream>

class grandparents{
    public:
        void mygrandpaa()
        {
            std::cout << "Hello i'm grandpaa..." << std::endl;          
        }
};

class myparents : public grandparents
{
    public:
        void myparent()
        {
            std::cout << "Hello i'm parent..." << std::endl;
        }
};

class child : public myparents
{
    public:
        void children()
        {
            std::cout << "Hello i'm child..." << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    child mychildobj;

    mychildobj.mygrandpaa();
    mychildobj.myparent();
    mychildobj.children();
    
    return 0;
}
