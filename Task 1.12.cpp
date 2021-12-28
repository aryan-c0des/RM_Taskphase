#include <iostream>

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n = 0;
    std::cout << "Enter the number whose factorial is to be found: ";
    std::cin >> n;
    int ret = fact(n);
    std::cout << ret;
}
