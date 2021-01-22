//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 43
#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;

class Shape2D{
public:
    virtual void ShapeName() = 0;
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle:public Shape2D{
    const double radius;
public:
    Circle(double r):radius(r){
        cout<<"Circle having radius "<<r<<" is being constructed\n";
    }
    void ShapeName(){
        cout<<"It's a Circle\n";
    }
    double area(){
        return pi*pow(radius,2);
    }
    double perimeter(){
        return 2*pi*radius;
    }
};

class Rectangle:public Shape2D{
    const double length,width;
public:
    Rectangle(double l,double w):length(l),width(w){
        cout<<"Rectangle having length "<<length<<" and width "<<width<<" is being constructed\n";
    }
     void ShapeName(){
        cout<<"It's a Rectangle\n";
    }
    double area(){
        return length*width;
    }
    double perimeter(){
        return 2*(length+width);
    }
};

int main()
{
    Shape2D *arr[5] = {new Circle(3),new Circle(1),new Circle(2),new Rectangle(6,10),new Rectangle(20,20)};
    cout<<"\n\n------------------------------------------------------------------\n\n";
    for(int i = 0; i < 5; i++){
        arr[i]->ShapeName();
        cout<<"Area = "<<arr[i]->area()<<"\nPerimeter = "<<arr[i]->perimeter()<<"\n\n\n";
    }
    return 0;
}