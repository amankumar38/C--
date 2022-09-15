#include <iostream>
using namespace std;

template <class T1, class T2>

float funavg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    float a;
    a = funavg(57, 96);
    cout << "Avrage:- " << a << endl
         << endl;

    int x = 7;
    int y = 5;
    cout << "Befor swap: " << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;
    swapp(x, y);
    cout << "After swap: " << endl
         << "x = " << x << endl
         << "y = " << y << endl
         << endl;

    return 0;
}
