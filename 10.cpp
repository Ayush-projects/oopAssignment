// Pass by reference 

#include<iostream>
using namespace std;
void swap(int &a,int &b)
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
    cin>>a>>b;
    swap(a,b);
}

// Pass by Value

#include<iostream>
using namespace std;
void swap(int &a,int &b)
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
    cin>>a>>b;
    swap(a,b);
}


// For small objects pass by value will be faster for for large objects pass by reference will be faster