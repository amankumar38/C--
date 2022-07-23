#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    string arr[5] = {"dell", "lenovo", "hp", "apple", "asus"};

      for(int i = 0; i < 5; i++)
    {
        cout << i << " : " << arr[i] << endl;
    } 

    cout << " After changing the value in array." << endl;
    arr[0] = "legion";
    arr[4] = "vaio";

    cout << arr[0] << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << i << " : " << arr[i] << endl;
    }

    int arraysize = sizeof(arr);
    cout << "size of array is : " << arraysize <<endl;
    return 0;
}
