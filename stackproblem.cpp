#include <iostream>
using namespace std;
class Point
{

    int x;
    int y;
    static int count;

public:
    Point() : x(0), y(0) { count++; }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
        count++;
    }
    ~Point() { count--; }

    int getx() { return x; }
    int gety() { return y; } // can const objects call these functions.. check
    void setx(int x) { this->x = x; }
    void sety(int y) { this->y = y; }

    friend Point operator+(Point &, Point &);
    friend std::ostream &operator<<(std::ostream &, Point);
    
};

int Point::count = 0;

Point operator+(Point &p, Point &q) // check if const p can be passed
{
    Point sum(q.getx() + p.getx(), q.gety() + p.gety());
    return sum;
}
Point sum(Point&a , Point&b , Point&c){
                                         Point sum ;
                                          int x= a.getx() + b.getx() + c.getx() ;
                                          sum.setx(x);
                                          int y= a.gety() + b.gety() + c.gety() ;
                                          sum.sety(y);
                                          return sum;
                                             }

std::ostream &operator<<(std::ostream &os, Point p)
{
    os << "(" << p.getx() << "," << p.gety() << ")";
    return os;
}
int main()
{

    Point p(1, 2), q(3, 4);
    Point r = p + q;
    cout << p + q;
    cout << sum(p,q,r);
    // Point w = ;

    return 0;
}