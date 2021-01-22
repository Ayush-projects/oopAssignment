//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 51
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

template<class T>
class stack{
    T *arr;
    int top;
    unsigned int max_size;
public:
    stack(unsigned int size = 10){
        max_size = size;
        arr = new T[max_size];
        top = -1;
    }
    bool isFull(){
        return top == max_size - 1;
    }
    bool isEmpty(){
        return top == -1;
    }
    void push(T x){
        if(isFull()){
            cout<<"Stack overflow\n";
            return;
        }
        arr[++top] = x;
        cout<<x<<" has been pushed into the stack successfully\n";
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow\n";
            return;
        }
        top--;
        cout<<" has been popped out successfully\n";
    }
    T peak(){
        return arr[top];
    }
};

int main()
{
    stack<int> st1;
    stack<complex> st2;
    st1.push(4); st1.push(3); st1.push(8); st1.push(12); st1.push(9);
    while(!st1.isEmpty()){
        cout<<st1.peak()<<" ";
        st1.pop();
    }
    cout<<endl;
    for(int i = 1; i <= 6; i++){
        complex c(i,i*i);
        st2.push(c);
    }
    while(!st2.isEmpty()){
        cout<<st2.peak();
        st2.pop();
    }
    return 0;
}