#include <iostream>

std::string sent;
int len;

int main()
{
    std::cout << "Enter a sentence: ";
    std::cin >> sent;
    len = sent.length();
    for(int i = 0; i<len; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if (sent[j] > sent [j + 1])
            {
                char temp = sent[j];
                sent [j] = sent[j + 1];
                sent[j + 1] = temp;
            }
        }
    }
    std::cout << sent;
}
