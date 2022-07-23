#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    struct
    {
        long long mynum;
        string mystring;
    }mystruct;

    mystruct.mynum = 7206847388;
    mystruct.mystring = "Aman kumar";

    cout << "Phone No.:- " << mystruct.mynum << endl;
    cout << "Name:- " << mystruct.mystring << endl;
    return 0;
}
