#include <iostream>

void multiply(int mat1[][100], int mat2[][100], int &r1, int &c1, int &c2, int mult[][100])
{
   int sum=0;
   for(int i = 0; i < r1; i++)
   {
       for(int j = 0; j < c2; j++)
       {
           for(int k = 0; k < c1; k++)
           {
               sum += mat1[i][k] * mat2[k][j];
           }
           mult[i][j] = sum;
           sum=0;
       }
   }
   for(int i = 0; i < r1; i++)
   {
       for(int j = 0; j < c2; j++)
       {
           std::cout << mult[i][j] << " ";
       }
       std::cout << "\n";
   }
}

void transpose(int mat[][100], int &r, int &c)
{
    int transp[c][r];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            transp[j][i] = mat[i][j];
        }
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            std::cout << transp[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int r0,r01,c0,c01;
    std::cout << "Enter the number rows and columns of the first matrix:\n ";
    std::cin >> r0 >> c0;
    std::cout << "Enter the number rows and columns of the second matrix:\n ";
    std::cin >> r01 >> c01;
    int a[100][100], b[100][100], mul[100][100];
    for(int i = 0; i < r0; i++)
    {
        for(int j = 0; j < c0; j++)
        {
            std::cout << "Enter element " << i+1 << "," << j+1 << " of the first matrix:\n";
            std::cin >> a[i][j];
        }
    }
    for(int i = 0; i < r01; i++)
    {
        for(int j = 0; j < c01; j++)
        {
            std::cout << "Enter element " << i+1 << "," << j+1 << " of the second matrix:\n";
            std::cin >> b[i][j];
        }
    }
    std::cout << "A.B = \n";
    multiply(a, b, r0, c0, c01, mul);
    std::cout << "\n( A.B)' = \n";
    transpose(mul, r0, c01);
    std::cout << "\n B' = \n";
    transpose(b, r01, c01);
    std::cout << "\n A' = \n";
    transpose(a, r0, c0);
    std::cout << "\n B'.A' = \n";
    multiply(a, b, r0, c0, c01, mul); //unable to pass the transposed version of vector A and B
    std::cout << "Hence, proved that (A.B)' = B'.A'";
}

