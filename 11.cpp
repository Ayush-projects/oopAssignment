
//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 11
#include<iostream>
using namespace std;
int fact(const int &n)
{
    if(n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
    
}
int main()
{
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int k = fact(n);
    cout<<"Factorial of the number is : "<<k;
}