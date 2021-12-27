#include <iostream>

int main()
{
    std::string a, b;
    std::cout << "Enter a string: ";
    std::cin >> a;
    b = a.c_str();
    std::cout << "The copied string is: \n" << b;
}
