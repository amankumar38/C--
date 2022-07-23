#include <iostream>
#include <string>

using namespace std;

void fun_pera(string fname)
{
    cout << fname << " S" <<endl;
}

//Defult perameter
void fun_pera_default(string country = "India")
{
    cout << country << endl;
}

int main(int argc, char const *argv[])
{
    fun_pera("A");
    fun_pera("M");
    fun_pera("T");
    fun_pera("K");

    fun_pera_default();
    fun_pera_default("Norway");
    fun_pera_default("Sweden");
    return 0;
}
