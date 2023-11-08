#include <iostream>
using namespace std;
struct point {
    double x, y;
};
struct rect{
    point x1, x2;
    void print(){
            cout << x1.x << " " << x1.y << " and ";
            cout << x2.x << " " << x2.y << endl;
    }

};
bool inside(rect r, point a) {
        if (r.x1.x>r.x2.x){
            point temp;
            temp.x = r.x1.x; temp.y = r.x1.y;
            r.x1.x = r.x2.x; r.x1.y = r.x2.y;
            r.x2.x = temp.x; r.x2.y = temp.y;
        }
        if ((a.x < r.x2.x) && (a.x > r.x1.x) && (a.y < r.x2.y) && (a.y > r.x1.y)) { 
            cout << "inside";
            return true;
        }
        else {
            cout << "not inside";
            return false;
        }
        
}
rect shift (rect &r, double dx, double dy){
    r.x1.x += dx; r.x1.y +=dy;
    r.x2.x += dx; r.x2.y += dy;
    return r;

}
int main (){
    point a = {2,3}; point b = {5,8};
    rect r1 = {a,b};
    point c; cin >> c.x >> c.y;
    inside(r1, c);
    double dx, dy;
    cin >> dx >> dy;
    cout << "before shifting "; r1.print();
    cout << "after shifting "; shift(r1, dx, dy).print();
}