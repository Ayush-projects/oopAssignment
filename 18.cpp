//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 18
#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
    const double x,y,z;
    Point(const double x,const double y, const double z):x(x),y(y),z(z){}
    double operator-(const Point &p){
        return sqrt(pow((this->x - p.x),2) + pow((this->y - p.y),2) + pow((this->z-p.z),2));
    }
};

int main()
{
    Point p1(1,2,4),p2(2,4,6);
    double distance = p2 - p1;
    cout<<"Distance between (1,2,4) and (2,4,6) is : "<< distance;
    return 0;
}