//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 35
#include<iostream>
using namespace std;

class Integer{
    int i;
public :
    Integer(int a = 0):i(a){}
    operator Integer(){
        return *this;
    }
    operator int(){
        return i;
    }
    Integer operator++(int){
        Integer temp = *this;
        i++;
        return temp;
    }
    friend ostream& operator<<(ostream &os,Integer I){
        os<<I.i<<" ";
        return os;
    }
    ~Integer() {}
};

int main() {
    Integer a = 4, b = a, c;
    c = a + b++;
    int i = a;
    cout << a << b << c;
    return 0;
}