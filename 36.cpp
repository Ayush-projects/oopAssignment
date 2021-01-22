//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 36
#include<iostream>
using namespace std;

class IntArray{
    int *arr;
    int max_size;
public:
    IntArray(){}
    IntArray(IntArray &I){
        arr = I.arr;
    }
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
    friend istream& operator>>(istream &is,IntArray &array){
        for(int i = 0; i < array.max_size; i++){
            cin>>array.arr[i];
        }
        return is;
    }
    friend ostream& operator<<(ostream &os,IntArray &array){
        for(int i = 0; i < array.max_size; i++){
            os<<array[i]<<" ";
        }
        return os;
    }
};

class Table{
    int row,column;
    IntArray* buf;
public:
    Table(int r,int c):row(r),column(c){
        buf = new IntArray[row];
        for(int i = 0; i < row; i++){
            buf[i] = IntArray(column); 
        }
    }
    IntArray& operator[](int index){
        return buf[index];
    }
    friend ostream& operator<<(ostream &os,Table &t){
        for(int i = 0; i < t.row; i++){
            cout<<t[i]<<endl;
        }
        return os;
    }
    friend istream& operator>>(istream &is,Table &t){
        for(int i = 0; i< t.row; i++){
            cin>>t[i];
        }
        return is;
    }
};

int main()
{
    Table t(4, 5), t1(4, 5);
    cin >> t;
    cout<<endl;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;   
}