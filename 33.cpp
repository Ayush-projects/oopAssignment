//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 33
#include<iostream>
using namespace std;

class INT {
 int i;
 public :
 INT(int a):i(a){}
 operator INT(){
     return *this;
 }
 operator int(){
     return i;
 }
 INT operator++(){
     i++;
     return *this;
 }
 INT operator++(int){
     INT temp = *this;
     i++;
     return temp;
 }
 ~INT() {}
};

int main() {
 int x = 3;
 INT y = x; 
 y++ = ++y;
 x = y;
 cout<<"x = "<<x;
 return 0;
}
