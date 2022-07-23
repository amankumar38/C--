#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    string arr[2][2]={
        {"a","b"},
        {"c","d"}
    };
    cout << arr[1][1];
    return 0;
}
