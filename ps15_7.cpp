#include <iostream>
#include <cmath>
using namespace std;
struct Circle{
    double x, y, r;
    Circle(double x1 = 0, double y1 = 0, double r1 = 0) {
            x = x1; y = y1; r = r1;
    }
    double circumference(){
        return (2*3.14*r);
    }
    double area(){
        return (3.14*r*r);
    }
    
};
ostream & operator << (ostream & ost, const Circle & c){
    ost << c.x<< ", " << c.y << ", " << c.r;
    return ost;
}
istream & operator >> (istream & ist, Circle &c){
    ist >> c.x >> c.y >> c.r;
    return ist;
}

int main(){
    Circle c1(1,2,3);
    cout << c1;
    Circle c2;
    cin >> c2;
    cout << c1.circumference() << endl;
    cout << c2.area() << endl;
}