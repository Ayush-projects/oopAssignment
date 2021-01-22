//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 26
#include<iostream>
#include<climits>
using namespace std;

class stack{
    int *buffer;
    int top;
    const unsigned int max_size;
public:
    stack(int size = 5):max_size(size){
        top = -1;
        buffer = new int[max_size];
    }
    void push(int x){
        if(full()){
            cout<<"stack overflow\n";
        }
        buffer[++top] = x;
    }
    int pop(){
        if(empty()){
            cout<<"Stack underflow\n";
            return INT_MIN;
        }
        return buffer[top--];
    }
    bool empty(){
        return top == -1;
    }
    bool full(){
        return top == max_size-1;
    }
};

int main()
{
    stack s(10);
    for(int i = 2; i <= 5; i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.pop()<<" ";
    }
    return 0;
}
