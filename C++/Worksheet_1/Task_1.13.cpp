#include <iostream>

int sum(int n)
{
    int no = n;
    int sum = 0;
    while(no != 0)
    {
        int d = no % 10;
        sum += d;
        no /= 10;
    }
    return sum;
}

int sumr(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n%10 + sumr(n/10);
    }
}

int main()
{
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int ret = sum(n);
    std::cout << "Sum without recursion: " << ret;
    std::cout << "\nSum with recursion: " << sumr(n);
}
