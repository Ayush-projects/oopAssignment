//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 19
#include<iostream>
using namespace std;

class Rectangle{
    const double length,width;
public:
    Rectangle(double l,double w):length(l),width(w){
        cout<<"Rectangle having length "<<length<<" and width "<<width<<" is being constructed\n";
    }
    double area(){
        return length*width;
    }
};

int main()
{
    Rectangle r[] = {Rectangle(1,2),Rectangle(2,3),Rectangle(3,4),Rectangle(4,5)};
    for(int i = 0; i < 4; i++){
        cout<<"Area of rectangle "<<i+1<<" is "<<r[i].area()<<endl;
    }
    return 0;
}