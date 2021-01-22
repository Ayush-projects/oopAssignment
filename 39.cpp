//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 39
#include<iostream>
using namespace std;

class Base1{
public:
    void display(){
        cout<<"In Base1"<<endl;
    }
};

class Base2{
public:
    void display(){
        cout<<"In Base2"<<endl;
    }
};

class Derived:public Base1,public Base2{
public:
    void display(){
        cout<<"In Derived"<<endl;
    }
};

int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;
    b1.display();
    b2.display();
    d.display();
    return 0;
}