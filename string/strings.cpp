#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string frist_name, last_name, full_name;

    cout << "Enter the Frist Name: ";
    cin >> frist_name;

    cout << "Enter the Last Name: ";
    cin >> last_name;

    full_name = frist_name + " " + last_name;
    cout << "Full name = " << full_name << endl; 


    string x = "QWERTYUIOPASDFGHJKLZXCVBNM879286e928te928e027y-3917-29y012986e87259820y8dhqwodhwihodiwqbxlzkbkcjasvljbalsjvclasucbz,xjbkasufgkasuvckxjvcks";
    cout << "Lenght of string is equal to " << x.length() << endl;


    cout << frist_name.append(last_name);

    return 0;
}
