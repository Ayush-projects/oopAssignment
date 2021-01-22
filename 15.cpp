//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 15
#include <iostream>
using namespace std;

int maxim(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int maxim(int a[], int len)
{
    int max = a[0];
    for (int i = 1; i < len; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int arr[] = {1, 7, -4, 5, 3, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int a = 5, b = 7, c = 2;
    cout << maxim(a, b, c) << endl;
    cout << maxim(arr, len) << endl;
}