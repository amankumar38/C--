#include <iostream>

using namespace std;

int a,b;

int main(int argc, char const *argv[])
{
    cout << "Enter the frist number:" << endl;
    cin >> a;

    cout << "Enter the second number:" << endl;
    cin >> b;

    if(a > b)
    {
        cout << "a is greater than b";
    }
    else
    {
        cout << "b is greater than a";
    }
    return 0;
}
