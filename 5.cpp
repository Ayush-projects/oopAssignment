#include<iostream>
using namespace std;
int main()
{
    cout<<"Celsius"<<"     "<<"Fahrenheit"<<endl;
    for(int i=0; i<=100; i++)
    {
        cout<<i<<"     "<< i*9.0/5+32<<endl;
    }
}