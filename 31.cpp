//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 31
#include<iostream>
#include<cmath>
using namespace std;

class complex{
    double real,img;
public:
    complex(double r = 0, double i = 0):real(r),img(i){}
    complex operator+(const complex &c){
        complex temp(real+c.real,img+c.img);
        return temp;
    }
    complex operator-(const complex &c){
        complex temp(real-c.real,img-c.img);
        return temp;
    }
    complex operator*(const complex &c){
        complex temp(real*c.real - img*c.img, img*c.real + real*c.img);
        return temp;
    }
    complex operator/(const complex &c){
        double modCsqr = pow(c.real,2) + pow(c.img,2); 
        complex temp((real*c.real + img*c.img)/modCsqr, (img*c.real - real*c.img)/modCsqr);
        return temp;
    }
    operator complex(){
        return complex(real,img);
    }
    friend ostream& operator<<(ostream &os,const complex &c){
        os<<c.real<<" + i("<<c.img<<")"<<endl;
        return os;
    }
};

int main()
{
    complex c1(1,2),c2(10,20),c;
    c = c1 + c2;
    cout<<c;
    c = c1 - c2;
    cout<<c;
    c = c1 * c2;
    cout<<c;
    c = c1 / c2;
    cout<<c;
    return 0;
}