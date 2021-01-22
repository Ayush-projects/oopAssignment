//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 46
#include<iostream>
using namespace std;
int main()
{
    int n,d,ans;
    cin>>n>>d;
    try{
        if(!d) throw "error";
        ans = n/d;
        cout<<"("<<n<<"/"<<d<<") = "<<ans;
    }
    catch(...){
        cout<<"Exception occured due to trying to perform division by zero\n";
    }
    return 0;
}