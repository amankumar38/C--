#include <iostream>

class complex
{
    float x, y;
    public:
        complex(){ }
        complex(float a)
        {
            x = y = a;
        }
        complex(float real, float imag)
        {
            x = real;
            y = imag;
        }

        friend complex sum(complex, complex);
        friend void show (complex);
};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}

void show(complex c)
{
    std::cout << c.x <<" +j" << c.y << std::endl;
}

int main(int argc, char const *argv[])
{
    complex A(2.7, 3.5);
    complex B(1.6);
    complex C;

    C = sum(A, B);

    std::cout << "A = ";
    show(A);
    std::cout << "B = ";
    show(B);
    std::cout << "C = ";
    show(C);

    complex P, Q, R;
    P = complex(2.5, 3.9);
    Q = complex(1.6, 2.5);
    R = sum(P, Q);

    std::cout << "\n";

    std::cout << "P = ";
    show(P);
    std::cout << "Q = ";
    show(Q);
    std::cout << "R = ";
    show(R);
    return 0;
}
