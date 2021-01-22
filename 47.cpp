//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 47
#include<iostream>
using namespace std;

class stack{
    int *arr;
    int top;
    const unsigned int max_size;
public:
    stack(int size = 5):max_size(size){
        top = -1;
        arr = new int[5];
    }
    void push(int x){
        if(full()){
            throw string("stack overflow\n");
        }
        cout<<x<<" has been pushed into the stack successfully\n";
        arr[++top] = x;
    }
    void pop(){
        if(empty()){
            throw string("stack underflow\n");
        }
        cout<<"has been popped out of the stack successfully\n";
        top--;
    }
    bool empty(){
        return top == -1;
    }
    bool full(){
        return top == max_size-1;
    }
    int peak(){
        return arr[top];
    }
};

int main()
{
    stack s;
    try{
        s.push(1); s.push(2); s.push(3); s.push(4); s.push(5); s.push(6);
    }
    catch(string s){
        cout<<s;
    }
    try{
         while(!s.empty()){
            int x = s.peak();
            cout<<x<<" ";
            s.pop();
        }
        s.pop();
    }
    catch(string s){
        cout<<s;
    }
    return 0;
}