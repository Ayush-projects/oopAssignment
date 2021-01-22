//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 37
#include<iostream>
using namespace std;

class Index{
    int i;
public:
    Index(int idx):i(idx){}
    int get(){
        return i;
    }
    operator int(){
        return i;
    }
    Index operator+(Index I){
        return Index(i + I.i);
    }
};

class Integer{
    int i;
public:
    Integer(){}
    Integer(Index &idx){
        i = idx.get();
    }
};

int main()
{
    Index in(4), out(10);
    int x = in;
    int y = in + out;
    in = 2;
    Integer i;
    i = in;
    return 0;
}