#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string name = "aman";
    string* ptr = &name;
    cout << "name : " << name <<endl;
    cout << " *: " << &name << endl;
    cout <<" ptr: " << ptr;
    return 0;
}
