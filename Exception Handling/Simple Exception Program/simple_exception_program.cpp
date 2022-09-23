#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    int x = a - b;

    try
    {
       if(x != 0)
       {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "x: " << x << endl;
            float div = a/x;
            cout << "Result(a/x) = " << div << "\n";
       }
       else
       {
            throw(x);
       }
    }
    catch(int i)
    {
        cout << "Exception caught : DIVIDED BY ZERO" << endl;
    }
    cout << "END";
    
    return 0;
}
