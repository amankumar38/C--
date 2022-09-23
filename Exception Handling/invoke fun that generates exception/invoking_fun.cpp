#include <iostream>
using namespace std;

void divide(int x, int y, int z)
{
    cout << "We are inside function" << endl;
    if((x-y) != 0)
    {
        int R = z/(x-y);
        cout << "Result = " << R << endl;
    }
    else
    {
        cout << "We are inside function's else block" << endl;
        throw(x-y);
    }
}

int main(int argc, char const *argv[])
{
    try
    {
        cout << "We are inside try block: " << endl;
        divide(10, 20, 30);
        divide(10, 10, 20);
    }
    catch(int i)
    {
        cout << "Caught the exception " << endl;
    }
    return 0;
}

