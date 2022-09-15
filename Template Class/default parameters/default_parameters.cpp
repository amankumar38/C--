#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class sample
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    // sample(T1 x, T2 y, T3 z)
    // {
    //     data1 = x;
    //     data2 = y;
    //     data3 = z;
    // }
    sample()
    {
        cout << "Enter Value of A = " <<endl;
        cin >> data1;
        cout << "Enter Value of B = " <<endl;
        cin >> data2;
        cout << "Enter Value of C = " <<endl;
        cin >> data3;
    }
    void display()
    {
        cout << "Value of A = " << data1 << endl
             << "Value of B = " << data2 << endl
             << "Value of C = " << data3 << endl;
    }
};
int main(int argc, char const *argv[])
{
    sample <> ob1;
    ob1.display();
    cout << "\n";
    sample <char, char, float> ob2;
    ob2.display();
    return 0;
}
