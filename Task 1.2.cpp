#include <iostream>
using namespace std;

int main()
{
   int r1,r2,c1,c2;
   cout << "Enter the number rows and columns of the first matrix:\n ";
   cin >> r1 >> c1;
   cout << "Enter the number rows and columns of the second matrix:\n ";
   cin >> r2 >> c2;
   while (c1 != r2)
   {
       cout << "Please enter compatible matrices.\n";
       cout << "Enter the number rows and columns of the first matrix:\n ";
       cin >> r1 >> c1;
       cout << "Enter the number rows and columns of the second matrix:\n ";
       cin >> r2 >> c2;
   }
   int mat1[r1][c1], mat2[r2][c2], mult[r1][c2];
   for(int i = 0; i < r1; i++)
   {
       for(int j = 0; j < c1; j++)
       {
           cout << "Enter element " << i+1 << "," << j+1 << " of the first matrix:\n";
           cin >> mat1[i][j];
       }
   }
   for(int i = 0; i < r2; i++)
   {
       for(int j = 0; j < c2; j++)
       {
           cout << "Enter element " << i+1 << "," << j+1 << " of the second matrix:\n";
           cin >> mat2[i][j];
       }
   }
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
           cout << mult[i][j] << " ";
       }
       cout << "\n";
   }
}
