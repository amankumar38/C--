#include <iostream>

inline float mul(float x, float y){return x*y;}

inline double div(float p, float q){return p/q;}
int main()
{
    float a = 12.5, b = 36.5;

    std::cout<< "Multiplication " << mul(a,b) <<std::endl;
    std::cout << "Divison " << div(b,a) <<std::endl;
}
