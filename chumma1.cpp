#include <iostream>
using namespace std;
struct Point{
    double x,y;
    static int counter;
    Point(double p=0, double q=0) { 
        x = p; y = q;
        counter++;
    }
    static void reset(){counter = 0;}
};

int Point::counter = 0;
int main() {
    Point p,q ;
    //p = Point(1,3);
    Point::reset();
    Point r;
    //cout << p.x << ", "<< p.y;
    cout << Point::counter;
}