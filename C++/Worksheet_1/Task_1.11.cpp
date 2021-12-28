#include <iostream>

int binarySearch(int arr[], int l, int h, int n)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == n)
        {
            return mid;
        }
        if (arr[mid] > n)
        {
            return binarySearch(arr, l, mid - 1, n);
        }
        else
        {
            return binarySearch(arr, mid + 1, h, n);
        }
    }
    return -1;
}

int main()
{
    int len = 0;
    int n = 0;
    std::cout << "Enter size of array: ";
    std::cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++)
    {
        std::cout << "Enter a number:\n";
        std::cin >> arr[i];
    }
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    std::cout << "Enter number to be searched: ";
    std::cin >> n;
    int result = binarySearch(arr, 0, arr[len-1], n);
    if(result == -1)
    {
       std::cout << "Element is not present in the array" ;
    }
    else
    {
       std::cout << "Element is present at index " << result;
    }
}
