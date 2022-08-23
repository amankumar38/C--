#include <iostream>

class copy_constructor
{
    int id;
    public:
        copy_constructor(){}
        copy_constructor(int a){
            id = a;
        }
        copy_constructor(copy_constructor &x)
        {
            id = x.id;
        }
        void display()
        {
            std::cout << id;
        }
};

int main()
{
    copy_constructor A(8000);
    copy_constructor B(A);
    copy_constructor C = A;

    copy_constructor D ;
    D = A;

    std::cout << "\n id of A: "; A.display();
    std::cout << "\n id of B: "; B.display();
    std::cout << "\n id of C: "; C.display();
    std::cout << "\n id of D: "; D.display();

    return 0;
}