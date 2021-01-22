//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 34
#include<iostream>
using namespace std;

class IntArray{
    int *arr;
    int max_size;
public:
    IntArray(const unsigned int size):max_size(size){
        arr = new int[max_size];
    }
    int& operator[](int index){
        if(index >= max_size){
            cout<<"Array index out of bound, exiting";
            exit(0);
        }
        return arr[index];
    }
    friend ostream& operator<<(ostream &os,IntArray &array){
        for(int i = 0; i < array.max_size; i++){
            os<<array[i]<<" ";
        }
        return os;
    }
};

int main()
{
    IntArray i(10);
    for(int k = 0; k < 10; k++)
        i[k] = k;
    cout << i;
    return 0;
}