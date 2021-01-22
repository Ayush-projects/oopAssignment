//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 27
#include<iostream>
#include<climits>
using namespace std;

class queue{
    int* data;
    int front,rear;
    int max_size;
public:
    queue(int size = 20):max_size(size),data(new int[max_size]){
        front = rear = -1;
    }
    bool isFull(){
        return front == (rear + 1) % max_size;
    }
    bool isEmpty(){
        return front == -1 && rear == -1;
    }
    void add(int val){
        if(isEmpty()){
            front = rear = 0;
            data[rear] = val;
            return;
        }
        if(isFull()){
            cout<<"Queue is full\n";
            return;
        }
        rear = (++rear) % max_size;
        data[rear] = val;
    }
    int remove(){
        if(isEmpty()){
            cout<<"Queue is empty. No more element can be popped out\n";
            return INT_MIN;
        }
        int temp = data[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (++front) % max_size;
        }
        return temp;
    }
};

int main()
{
    queue q(10);
    q.add(2); q.add(3); q.add(4); q.add(5);
    q.remove(); q.remove();
    while(!q.isEmpty()){
        cout<<q.remove()<<" ";
    }
    return 0;
}
