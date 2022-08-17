#include <iostream>

class matrix
{
    int m[3][3];
    public:
    void read();
    void display();
    friend matrix trans(matrix);
};

void matrix::read()
{
    std::cout << "Enter the elemets of the 3x3 matrix: " <<std::endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "m [" << i << "] [" << j << "] = " ;
            std::cin >> m[i][j];
        }
    }
}

void matrix::display()
{
    for(int i = 0; i < 3; i++)
    {
        std::cout << std::endl;
        for(int j = 0; j < 3; j++)
        {
            std::cout << m[i][j] << "\t\t";
        }
    }
}

matrix trans(matrix m1)
{
    matrix m2;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return(m2);
}

int main(int argc, char const *argv[])
{
    matrix mat1,mat2;
    mat1.read();
    std::cout<<"You entered the following matrix: " <<std::endl;
    mat1.display();

    mat2 = trans(mat1);

    std::cout << "Transposed matrix: " <<std::endl;
    mat2.display();

    return 0;
}
