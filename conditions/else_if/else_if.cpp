#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int time = 20;

    if(time < 10)
    {
        cout<<" good morning";
    }
    else if( time < 20)
    {
        cout << "Good Day...";
    }
    else{
        cout << "Good Evening";
    }
    return 0;
}
