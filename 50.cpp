//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 50
#include<iostream>
using namespace std;

class complex{
    double img,real;
public:
    complex(double r = 0,double i = 0):img(i),real(r){}
    complex(complex &c){
        real = c.real; img = c.img;
    }
    friend ostream& operator<<(ostream &os,const complex &c){
        os<<c.real<<" + i"<<c.img;
        return os;
    }
};

class stack{
    int *arr;
    int top;
    unsigned int max_size;
public:
    stack(unsigned int size = 10){
        max_size = size;
        arr = new int[max_size];
        top = -1;
    }
    bool isFull(){
        return top == max_size - 1;
    }
    bool isEmpty(){
        return top == -1;
    }
    void push(int x){
        if(isFull()){
            cout<<"Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow\n";
            return;
        }
        top--;
    }
    int peak(){
        return arr[top];
    }
    void printValues(){
        while(!isEmpty()){
            cout<<peak()<<" ";
            pop();
        }
    }
};

template<class T>
void Swap(T &x,T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template<>
void Swap<stack>(stack &s1,stack &s2)
{
    stack temp = s2;
    s2 = s1;
    s1 = temp;
}

int main()
{
    int a = 10, b = 20;
    complex c1(2,3),c2(8,4);
    cout<<"Before swapping : a = "<<a<<", b = "<<b<<endl;
    Swap(a,b);
    cout<<"After swapping : a = "<<a<<", b = "<<b<<endl;
    cout<<"Before swapping : c1 = "<<c1<<", c2 = "<<c2<<endl;
    Swap(c1,c2);
    cout<<"After swapping : c1 = "<<c1<<", c2 = "<<c2<<endl;
    stack s1,s2;
    s1.push(20); s1.push(40); s1.push(50); s1.push(60);
    s2.push(99); s2.push(100); s2.push(33);
    stack temp1 = s1, temp2 = s2;
    cout<<"Before swapping : values of stack1 = "; temp1.printValues();
    cout<<", values of stack2 = "; temp2.printValues();
    Swap(s1,s2);
    cout<<endl<<"After swapping : values of stack1 = "; s1.printValues();
    cout<<", values of stack2 = "; s2.printValues();
    return 0;
}