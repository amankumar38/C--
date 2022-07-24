#include <iostream>
#include <string>

using namespace std;

void fun_pera(string fname)
{
    cout << fname << " S" <<endl;
}

int main(int argc, char const *argv[])
{
    fun_pera("A");
    fun_pera("M");
    fun_pera("T");
    fun_pera("K");
    return 0;
}
