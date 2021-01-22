//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 49
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class complex{
    double img,real;
public:
    complex(double r = 0,double i = 0):img(i),real(r){}
    bool operator>(complex &c){
        return sqrt(pow(real,2)+pow(img,2)) > sqrt(pow(c.real,2)+pow(c.img,2)) ? true : false;
    }
    friend ostream& operator<<(ostream &os,const complex &c){
        os<<c.real<<" + i"<<c.img;
        return os;
    }
};

template<class T>
T Max(T x,T y)
{
    return x > y ? x : y;
}

//template specializtion
template<>
char* Max<char*>(char *x,char* y)
{
    return strcmp(x,y) > 0 ? x : y;
}

int main()
{
    complex c1(6,8),c2(3,4);
    char str1[] = "supercalifragilisticexpilaidocious"; 
    char str2[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
    cout<<"Max(12,56) = "<<Max(12,56)<<endl;
    cout<<"Max(6 + i8, 3 + i4) = "<<Max(c1,c2)<<endl;
    cout<<"Max(str1,str2) = "<<Max(str1,str2)<<endl;
    return 0;
}