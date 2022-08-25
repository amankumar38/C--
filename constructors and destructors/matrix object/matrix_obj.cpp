#include <iostream>

class matrix{
    int **p;
    int d1,d2;
    public:
        matrix(int x, int y);
        void get_elements(int i, int j, int value);
        int put_elements(int i, int j);
};
void matrix::get_elements(int i, int j, int value)
{
    p[i][j] = value;
}

int matrix::put_elements(int i, int j)
{
    return p[i][j];
}

matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
}

int main(int argc, char const *argv[])
{
    int m, n;

    std::cout << "Enter the size of matrix: " << std::endl;
    std::cin >> m >> n;
    matrix A(m,n);

    std::cout << "Enter the element row by row " <<std::endl;

    int i, j , value;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            std::cin >> value;
            A.get_elements(i, j, value);
        }
    }

    std::cout << "\n";
    std::cout << A.put_elements(1,2);
    
    return 0;
}
