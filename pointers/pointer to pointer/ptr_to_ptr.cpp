#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int myvar;
    int *myptr;
    int **myptrr;

    cout << "Enter any number: " << endl;
    cin >> myvar;

    myptr = &myvar;
    myptrr = &myptr;

    cout << "The value of myvar     " << myvar << endl;
    cout << "The address of myvar   " << myptr << endl;
    cout << "The address of *myptr  " << &myptr << endl;
    cout << "The address of *myptrr " << &myptrr << endl; 

    return 0;
}
