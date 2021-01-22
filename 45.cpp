//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 45
#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"Base class constructor\n";
    }
    virtual ~Base(){
        cout<<"Base class destructor\n";
    }
};

class Derived:public Base{
public:
    Derived(){
        cout<<"Derived class constructor\n";
    }
    ~Derived(){
        cout<<"Derived class destructor\n";
    }
};

int main()
{
    Base *pb = new Derived;
    delete pb;

    

    return 0;
}