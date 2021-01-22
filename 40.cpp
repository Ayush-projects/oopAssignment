//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 40
#include<iostream>
using namespace std;

class A{
public:
    void display(){
        cout<<"In class A\n";
    }
};

class B{
public:
    void display(){
        cout<<"In class B\n";
    }
};

class C{
public:
    void display(){
        cout<<"In class C\n";
    }
};

class D:public A,public B{
public:
    void display(){
        cout<<"In class D\n";
    }
};

class E:public B,public C{
public:
    void display(){
        cout<<"In class E\n";
    }
};

class F:public D,public E{
public:
    void display(){
        cout<<"In class F\n";
    }
};

int main()
{
    A a; B b; C c; D d; E e; F f;
    a.display(); b.display(); c.display(); d.display(); e.display(); f.display();
    return 0;
}