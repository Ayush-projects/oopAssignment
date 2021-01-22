//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 8
#include<iostream>
using namespace std;
void swap(int &a, int&b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout<<a<<" "<<b;

}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Numbers after swapping :";
    swap(a,b);
}