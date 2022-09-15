#include <iostream>
using namespace std;

template <class T1, class T2>

class multi_parameter
{

public:
    T1 data1;
    T2 data2;
    multi_parameter(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "A = " << data1 << endl << "B = " << data2 << endl;
    }

};

int main(int argc, char const *argv[])
{
    multi_parameter <char, float> myobj('b', 1.3);
    multi_parameter <int, double> myobj2(2, 3.14);
    myobj.display();
    cout << "\n";
    myobj2.display();
    return 0;
}



