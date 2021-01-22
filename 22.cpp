//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 22
#include<iostream>
#include<algorithm>
using namespace std;

class IntArray{
    int *arr;
    unsigned int size;
public:
    IntArray(int size):size(size),arr(new int[size]){}
    IntArray(IntArray &iarr){
        arr = iarr.arr;
        size = iarr.size;
    }
    int& operator[](int index){
        return arr[index];
    }
    IntArray operator+(IntArray i){
        int min_size = size < i.size ? size : i.size;
        int max_size = size > i.size ? size : i.size;
        IntArray temp(max_size);
        int j;
        for(j = 0; j < min_size; j++){
            temp.arr[j] = arr[j] + i.arr[j];
        }
        if(size == max_size){
            while(j < max_size){
                temp.arr[j] = arr[j];
                j++;
            }
        }
        else{
            while(j < max_size){
                temp.arr[j] = i.arr[j];
                j++;
            }
        }
        return temp;
    }
    void Reverse(){
        for(int i = 0; i < size/2; i++){
            swap(arr[i],arr[size-i-1]);
        }
    }
    void Sort(){
        sort(arr,arr+size);
    }
    ~IntArray(){
        delete arr;
    }
};

int main()
{
    IntArray Iarr1(3);
    for(int i = 0; i < 3; i++){
        Iarr1[i] = i+1;
    }
    IntArray Iarr2 = Iarr1;
    for(int i = 0; i < 3; i++){
        cout<<Iarr2[i]<<" ";
    }
    cout<<endl<<"After reversing the array we get : ";
    Iarr2.Reverse();
    for(int i = 0; i < 3; i++){
        cout<<Iarr2[i]<<" ";
    }
    return 0;
}