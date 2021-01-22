//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 32
class complex{
    double real,img;
public:
    complex(double r = 0,double i = 0):real(r),img(i){}
    bool operator!=(int zero){
        return real != 0 && img != 0;
    }
    void display(){
        cout<<real<<" + i"<<"("<<img<<")";
    }
};

class roots{
public: 
    complex cr1,cr2;
    double r1,r2;
    roots(complex c1 = NULL,complex c2 = NULL){
        cr1 = c1;
        cr2 = c2;
        r1 = r2 = 0;
    }
    roots(double r1 = 0,double r2 = 0){
        this->r1 = r1;
        this->r2 = r2;
        cr1 = cr2 = NULL;
    }
};

class Quadratic{
    double a,b,c;
public:
    Quadratic(int a = 0, int b = 0, int c = 0){
        this->a = a; this->b = b; this->c =c;
    }
    friend istream& operator>>(istream& is,Quadratic &p){
        cout<<"Enter the values of a, b and c respectively : ";
        is>>p.a>>p.b>>p.c;
        return is;
    }
    friend ostream& operator<<(ostream& os,const Quadratic &p){
        os<<p.a<<"x^2 + "<<p.b<<"x + "<<p.c;
        return os;
    }
    roots getRoots(Quadratic q){
        roots r(0,0);
        double D = q.b*q.b - 4*q.a*q.c;
        if(D >= 0){
            double root1 = (-q.b + sqrt(D))/(2*q.a);
            double root2 = (-q.b - sqrt(D))/(2*q.a);
            r = roots(root1,root2);
        }
        else{
            double real = (-q.b)/(2*q.a);
            double img = sqrt(-D)/(2*q.a);
            complex root1(real,img);
            complex root2(real,-img);
            r = roots(root1,root2);
        }
        return r;
    }
};

void showRoots(roots r){
    if(r.cr1 != 0 && r.cr2 != 0){
        r.cr1.display();
        cout<<"   ";
        r.cr2.display();
    }
    else{
        cout<<r.r1<<" "<<r.r2;
    }
}

int main()
{
    Quadratic p;
    cin>>p;
    cout<<"Displaying the polynomial : "<<p<<endl;
    roots r = p.getRoots(p);
    cout<<"Display the roots of the quadratic polynomial : "; showRoots(r);
    return 0;
}