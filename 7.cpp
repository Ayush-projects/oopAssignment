#include<iostream>
using namespace std;
int fact(const int n){
    if(n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of the number is: "<<fact(n)<<endl;
    
}