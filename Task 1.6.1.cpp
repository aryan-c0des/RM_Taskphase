#include <iostream>

void bub(int a[], int s)
{
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < s; i++)
    {
        std::cout << a[i] << " \n";
    }
}

void sel(int a[], int s)
{
    for(int i = 0; i < s; i++)
    {
        int min = a[i];
        int m = i;
        for(int j = i+1; j < s; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                m = j;
            }
        }
        int temp = a[i];
        a[i] = a[m];
        a[m] = temp;
    }
    for(int i = 0; i < s; i++)
    {
        std::cout << a[i] << " \n";
    }
}

int bin(int a[], int s, int n)
{
    int l = 0;
    int h = s-1;
    int m = 0;
    while(l <= h)
    {
        m = (l + h)/2;
        if(a[m] == n)
        {
            return m;
        }
        else if(n < a[m])
        {
            h = m;
        }
        else
        {
            l = m;
        }
    }
    return -1;
}

int main()
{
    char inp =' ';
    int si = 0;
    std:: cout << "Enter size of the array: ";
    std::cin >> si;
    int arr[si];
    for(int i= 0; i < si; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }
    std::cout << "Make a choice: \n" << "s : Selection Sorting \n" << "b : Bubble Sorting\n";
    std::cin >> inp;
    switch(inp)
    {
        case 's':
            {
                sel(arr, si);
                std::cout << "Enter number to be searched: ";
                int n = 0;
                std::cin >> n;
                int o = bin(arr, si, n);
                if(o == -1)
                {
                    std::cout << "Number not present.";
                }
                else
                {
                    std::cout << "Number present at index: " << o;
                }
                break;
            }

        case 'b':
            {
                bub(arr, si);
                std::cout << "Enter number to be searched: ";
                int n = 0;
                std::cin >> n;
                int o = bin(arr, si, n);
                if(o == -1)
                {
                    std::cout << "Number not present.";
                }
                else
                {
                    std::cout << "Number present at index: " << o;
                }
                break;
            }

        default : std::cout << "Invalid Input.";
                 break;
    }
}
