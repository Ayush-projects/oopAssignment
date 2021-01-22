//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 30
class Point{
public:
    const double x,y;
    Point(const double x,const double y):x(x),y(y){}
    double operator-(const Point &p){
        return sqrt(pow((this->x - p.x),2) + pow((this->y - p.y),2));
    }
};

int main()
{
    Point p1(0,0),p2(6,8);
    double distance = p2 - p1;
    cout<<distance;
    return 0;
}