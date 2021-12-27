#include <iostream>
#include <string>

int main()
{
    int n, c, temp;
    std::string h;
    std::cout << "Enter a decimal number: ";
    std::cin >> n;
    temp = n;
    std::string arr [] ={"A","B","C","D","E","F"};
    int no = n;
    int d = 0;
    while(no!=0)
    {
        d=no%16;
        no=no/16;
        if(d >= 10)
        {
            h= arr[d-10]+ h;
        }
        else
        {
            h= std::to_string(d) +h;
        }
        c++;
    }
    std::cout << "Hexadecimal: " << h << "\n";
    temp = n;
    int o[c];
    int f = 0;
    while(temp > 0)
    {
        o[f] = temp % 8;
        f++;
        temp /= 8;
    }
    std::cout << "Octal: ";
    for(int i = f-1; i >= 0; i--)
    {
        std::cout << o[i];
    }
    std::cout << "\n";
    temp = n;
    int b[c];
    int f1 = 0;
    while(temp > 0)
    {
        b[f1] = temp % 2;
        f1++;
        temp /= 2;
    }
    std::cout << "Binary: ";
    for(int i = f1-1; i >= 0; i--)
    {
        std::cout << b[i];
    }
}
