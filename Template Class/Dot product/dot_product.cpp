#include <iostream>
using namespace std;

template <class T>
class vector
{
    T * arr;
    int size;
    public:
        T get_size()
        {
            cout << "Enter the size of array: " <<endl;
            cin >> size;
            return size;
        }
        //vector(){}
        vector()
        {
            //size = m;
            arr = new T[size];
        }
        void get_arr()
        {
            cout << "Enter the Elements of array: " << endl;
            for(int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            //return this.arr;
        }
        T dot_product(vector &v)
        {
            T d = 0;
            for(int i = 0; i<size; i++)
            {
                d += this->arr[i] * arr[i];
            }
            return d;
        }

};
int main(int argc, char const *argv[])
{
    vector <int> v1;
    v1.get_size();
    v1.get_arr();

    vector <int> v2;
    v2.get_size();
    v2.get_arr();
    // v1.dot_product();

    int result1 = v1.dot_product(v2);

    vector <float> v3;
    v1.get_size();
    v1.get_arr();

    vector <float> v4;
    v2.get_size();
    v2.get_arr();

    float result2 = v1.dot_product(v2);

    cout << "result 1 = "<<result1 <<endl;
    cout << "result 2 = "<<result2 <<endl;
    return 0;
}

