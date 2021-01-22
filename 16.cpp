//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 16
#include <iostream>

using namespace std;

void print(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void print(int m, int n, int **mat)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int arr[] = {2, 7, 3, 4, 9, 6, 2, 3, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    print(arr, len);

    int m = 3, n = 3, k = 1;
    int **mat;
    mat = new int *[m];
    for (int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = k++;
        }
    }
    print(m, n, mat);
    return 0;
}