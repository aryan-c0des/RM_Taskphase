#include <iostream>

using namespace std;

int main()
{
    int n, c, rev, m, m1 = 0;
    int arr [c];
    cout << "Enter a number:";
    cin >> n;
    int  no = n;
    while (no != 0)
    {
        int d = no % 10;
        rev = (rev*10) + d;
        c++;
        no/=10;

    }
    cout << "Reverse: " << rev << "\n";
    no = rev;
    arr [c];
    int l = 0;
    while (no != 0)
    {
        int d = no % 10;
        cout << "array l dig" << d << "\n";
        arr[l] = d;
        cout << arr[l] << "input \n";
        l++;
        no /= 10;
    }
    for(int i = 0; i < c; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
            m1 = i;
        }
    }
    /*for(int i = 0; i < c; i++)
    {
        cout << arr[i] << "t\n";
    }*/
    for(int i = 0; i < m1; i++ )
    {
        if(&arr[i] == &arr[i+1] || &arr[i] > &arr[i+1] )
        {
            cout << "Not a Hill Number.1";
            return 0;
        }
    }
    for(int i = m1; i < c-1; i++)
    {
        cout << i << " " << arr[i+1] << "\n"; //current index and value at the next index (for numbers with more than 5 digits, the last 2 digits are being converted to the same digit and I cannot figure out why)
        if(arr[i] == arr[i+1])
        {
            cout << "Not a Hill Number.2";
            return 0;
        }
        else if( arr[i] < arr[i+1])
        {
            cout << "Not a Hill Number.2.1";
            return 0;
        }
    }
    cout << "It is a Hill Number.";
}
