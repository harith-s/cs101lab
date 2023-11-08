#include <iostream>
using namespace std;
struct Point {
    double x, y;
    Point(double a = 0, double b = 0) {
        x = a; y =  b;
    }
    void operator = (const Point &b){
        x = b.x; y = b.y; 

    }
    friend ostream & operator << (ostream & ost, Point y);
    bool operator == (const Point &b){
        if ((x==b.x) && (y = b.y)) return true;
        else return false;
    }
    bool operator != (const Point &b){
        if (not(*this == b)) return true;
        else return false;

    }
    Point operator + (const Point &b) const{
        return Point(x+b.x, y+b.y);
    }
    Point operator - (const Point &b) const {
        return Point(x-b.x, y-b.y);
    }
    Point operator * (const Point &b) const {
        return Point(x*b.x, y*b.y);
    }
};
ostream & operator << (ostream &ost, Point b){
    cout << '(' << b.x << ", " << b.y << ')';
    cout << endl;
    return ost;
}
