//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 25
#include<iostream>
using namespace std;

class complex{
    double real,img;
public:
    void setReal(double r){
        real = r;
    }
    void setImg(double i){
        img = i;
    }
    double getReal(){
        return real;
    }
    double getImg(){
        return img;
    }
    complex sum(complex c){
        complex temp;
        temp.real = c.real + real;
        temp.img = c.img + img;
        return temp;
    }
    void display(){
        cout<<real<<" + i("<<img<<")"<<" ";
    }
};

int main()
{
    complex c1,c2;
    c1.setReal(3); c1.setImg(8);
    c2.setReal(6); c2.setImg(9);
    complex c = c1.sum(c2);
    c.display();
    return 0;
}