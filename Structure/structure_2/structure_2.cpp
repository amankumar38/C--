#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    struct
    {
        string brand;
        string model;
        int year;
    }myCar1, myCar2, myCar3, myCar4;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Audi";
    myCar2.model = "R5";
    myCar2.year = 2017;

    myCar3.brand = "Honda";
    myCar3.model = "City";
    myCar3.year = 2015;

    myCar4.brand = "Maruti suzuki";
    myCar4.model = "Dzier";
    myCar4.year = 2015;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
    cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << endl;
    cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << endl;

    return 0;
}