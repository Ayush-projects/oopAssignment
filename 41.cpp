//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 41
#include<iostream>
using namespace std;

class person{
public:
    unsigned int age;
    double height, weight;
    string name;
public:
    person(){}
    person(int age,double height,double weight,string name){
        this->age = age;
        this->height = height;
        this->weight = weight;
        this->name = name;
    }
    int getAge(){
        return age;
    }
    double getHeight(){
        return height;
    }
    double getWeight(){
        return weight;
    }
    string getName(){
        return name;
    }
    virtual void printDetails(){
        cout<<"Name    : "<<name<<endl;
        cout<<"Age     : "<<age<<endl;
        cout<<"Height  : "<<height<<endl;
        cout<<"Weight  : "<<weight<<endl;
    }
};

class student: public person{
    int rollNo, yearOfAdm;
    string enrolledIn;
public:
    student(int rollNo,int yOa,string course,person p):person(p){
        this->rollNo = rollNo;
        this->yearOfAdm = yOa;
        this->enrolledIn = course;
    }
    void printDetails(){
        cout<<"roll No            : "<<rollNo<<endl;
        cout<<"year of admission  : "<<yearOfAdm<<endl;
        cout<<"course enrolled    : "<<enrolledIn<<endl;
    }
};

int main()
{
    person p1(60,5.9,57,"Amiya Kumar Dolui");
    student s1(84,2019,"BE_IT",person(19,6.2,66,"Shibashis Dolui"));
    p1.printDetails(); cout<<endl; s1.printDetails();

    person p2(55,5.5,65,"Kabita Dolui");
    person p3(28,5.3,60,"Anuprava Dolui");
    student s2(82,2019,"BE_IT",person(18,5.5,70,"Krishanu Roy"));
    student s3(81,2019,"BE_IT",person(19,5.8,68,"Ayush"));

    person *p[4];
    p[0] = &p2; p[1] = &p3; p[2] = &s2; p[3] = &s3;

    for(int i = 0; i < 4; i++){
         cout<<endl; p[i]->printDetails();
    }
    
    return 0;
}