//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 48
#include<iostream>
using namespace std;

class vehicle{
    double velocity;
public:
    vehicle(double v = 0):velocity(v){}
    double getVelocity(){
        return velocity;
    }
};

int main()
{
    vehicle v1(40),v2(-50);
    try{
        if((v1.getVelocity() < 0 && v2.getVelocity() > 0 ) || (v1.getVelocity() > 0 && v2.getVelocity() < 0)){
            throw "possible collision";
        }
        cout<<"No chance of collison\n";
    }
    catch(...){
        cout<<"Stop the cars by the means of showing red signal\n";
    }
    return 0;
}