#include <iostream>

int main()
{
    std::cout << "Enter number of rows and columns of the matrix: \n";
    int r,c,f;
    std::cin >> r >> c;
    int a[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            std::cout << "Enter element " << i << "," << j << " of the matrix: ";
            std::cin >> a[i][j];
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] == 0)
            {
                for(int k = 0; k < c; k++)
                {
                    a[i][k] = 0;
                }
                for(int l = 0; l < r; l++)
                {
                    a[l][j] = 0;
                }
                f = 1;
                break;
            }
        }
        if(f == 1)
        {
            break;
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }

}
