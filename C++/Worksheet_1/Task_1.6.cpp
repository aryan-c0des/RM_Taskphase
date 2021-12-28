#include <iostream>

int divisors(int num)
{
    int s = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            s = s + i;
        }
    }
    return s;
}

int main()
{
    int n, n1;
    std::cout << "Enter two numbers:\n";
    std::cin >> n >> n1;
    int sum = divisors(n) - n;
    int sum1 = divisors(n1) - n1;
    if( sum == n1 && sum1 == n)
    {
        std::cout << "They are Amicable numbers.";
    }
    else
    {
        std::cout << "They are not Amicable numbers.";
    }
}

