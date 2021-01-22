//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 38
#include<iostream>
using namespace std;

class parent{
    int data_p;
public:
    parent(int val = 0):data_p(val){}
    void display_parent(){
        cout<<data_p<<" ";
    }
};

class child:public parent{
    int data_c;
public:
    child(int val1 = 0,int val2 = 0):parent(val1),data_c(val2){}
    void display_child(){
        cout<<data_c<<" ";
    }
};

int main()
{
    child c(60,32);
    cout<<"Data of the parent class : ";
    c.display_parent();
    cout<<endl<<"Data of the child class : ";
    c.display_child();
    return 0;
}
