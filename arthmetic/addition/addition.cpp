#include <iostream>
#include <math.h>

using namespace std;

int a, b, sum;

int main(int argc, char const *argv[])
{
    cout<<"Addition of two numbers." << endl;

    cout<<"Enter the first number: " << endl;
    cin>> a ;

     cout<<"Enter the second number: " << endl;
    cin>> b;

    sum = a + b; 
    cout <<" Sum of two numbers = " << sum << endl;

    return 0;
}
