//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 44
#include<iostream>
#include<cmath>
#include<vector>
#define pi 3.14
using namespace std;

class Shape{
public:
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
    virtual void getShapeDimension() = 0;
    virtual void shapeName() = 0;
};

class TwoDShape:public Shape{
public:
    void getShapeDimension(){
        cout<<"It's shape is two dimensional\n";
    }
};

class ThreeDShape:public Shape{
public:
    void getShapeDimension(){
        cout<<"Its shape is three dimensional\n";
    }
};

class Circle:public TwoDShape{
    const double radius;
public:
    Circle(const double r):radius(r){
        cout<<"Circle having radius "<<r<<" is being constructed\n";
    }
    void shapeName(){
        cout<<"Its a Circle\n";
    }
    double getArea(){
        return pi*radius*radius;
    }
    double getVolume(){
        cout<<"Volume is not defined for a circle\n";
        return 0;
    }
};

class Triangle:public TwoDShape{
    const double a,b,c;
public:
    Triangle(const double x,const double y,const double z):a(x),b(y),c(z){
        cout<<"Triangle having sides "<<a<<", "<<b<<", "<<c<<" is being constructed\n";
    }
    void shapeName(){
        cout<<"Its a Triangle\n";
    }
    double getArea(){
        double s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    double getVolume(){
        cout<<"Volume is not defined for a triangle\n";
        return 0;
    }
};

class Ellipse:public TwoDShape{
    const double a,b;
public:
    Ellipse(const double maj,const double min):a(maj),b(min){
        cout<<"Ellipse having major axis "<<2*a<<" and minor axis "<<2*b<<" is being constructed\n";
    }
    void shapeName(){
        cout<<"Its an Ellipse\n";
    }
    double getArea(){
        return pi*a*b;
    }
    double getVolume(){
        cout<<"Volume is not defined for an ellipse\n";
        return 0;
    }
};

class Sphere:public ThreeDShape{
    const double radius;
public:
    Sphere(const double r):radius(r){
        cout<<"Sphere having radius "<<radius<<" is being constructed\n";
    }
    void shapeName(){
        cout<<"Its a Sphere\n";
    }
    double getArea(){
        return 4*pi*radius*radius;
    }
    double getVolume(){
        return (4.0/3)*pi*pow(radius,3);
    }
};

class Cube:public ThreeDShape{
    const double edge;
public:
    Cube(const double a):edge(a){
        cout<<"Cube having edge "<<edge<<" is being constructed\n";
    }
    void shapeName(){
        cout<<"It's a Cube\n";
    }
    double getArea(){
        return 6*pow(edge,2);
    }
    double getVolume(){
        return pow(edge,3);
    }
};

int main()
{
    vector<Shape*> v{new Circle(7),new Triangle(6,8,10),new Ellipse(12,8),new Sphere(10),new Cube(6)};
    cout<<endl<<endl;
    for(Shape *s : v){
        s->shapeName();
        s->getShapeDimension();
        double area = s->getArea();
        cout<<"Area = "<<area<<endl;
        double volume = s->getVolume();
        if(volume) cout<<"Volume = "<<volume;
        cout<<endl<<endl;
    }
    return 0;
}