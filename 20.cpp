//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 20
#include<iostream>
#include<unordered_map>
#include<list>
#include<cmath>
using namespace std;

class location{
public:
    double x,y;
    location(double x = 0,double y = 0):x(x),y(y){}
    friend ostream& operator<<(ostream &os,location l){
        os<<"("<<l.x<<","<<l.y<<")";
        return os;
    }
    double operator-(const location &l){
        return sqrt(pow((this->x - l.x),2) + pow((this->y - l.y),2));
    }
};

class WirelessDevice{
    double transmission_range;
    location l;
public:
    WirelessDevice(){}
    WirelessDevice(int tr,location l):transmission_range(tr),l(l){}
    double getTransmissionRange(){
        return transmission_range;
    }
    location getLocation(){
        return l;
    }
};

int main()
{
    WirelessDevice d[10];
    for(int i = 0; i < 10; i++){
        cout<<"Enter the transmission range and co-ordinate of the device : ";
        double tr,x,y;
        cin>>tr>>x>>y;
        d[i] = WirelessDevice(tr,location(x,y));
    }
    unordered_map<int,list<int>> inRangeDevices;
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 10; j++){
            double dist = d[i].getLocation() - d[j].getLocation();
            if(dist <= d[i].getTransmissionRange()){
                inRangeDevices[i].push_back(j);
            }
            if(dist <= d[j].getTransmissionRange()){
                inRangeDevices[j].push_back(i);
            }
        }
    }
    cout<<"Device_Location   Range     Loaction of inrange devices"<<endl;
    for(auto i : inRangeDevices){
        cout<<d[i.first].getLocation()<<"             "<<d[i.first].getTransmissionRange()<<"          ";
        for(auto d_no : i.second){
            cout<<d[d_no].getLocation()<<" ";
        }
        cout<<endl;
    }
    return 0;
}