#include <iostream>

using namespace std;

int main()
{
    int ii, numb;

    cout << "Enter the number:";
    cin >> numb; 

    for(ii=1; ii <=10; ii++)
    {
        cout << numb << " * " << ii << " = " << numb * ii << endl;
    }
}