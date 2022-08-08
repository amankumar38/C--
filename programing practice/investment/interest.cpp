#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float v,n,p,r;

    std::cout << std::setw(4) << "N" << std::setw(7) << "R" << std::setw(9) << "P" << std::setw(12) << "V"<<std::endl;

    for(n = 1, p = 1000, r =0.10; n < 11; n++, p += 1000, r += 0.02)
    {
        v = p*pow(1+r,n);
        std::cout << std::setw(4) << n << std::setw(8) << r << std::setw(10) << p << std::setw(16) << v <<std::endl;
    }
    return 0;
}
