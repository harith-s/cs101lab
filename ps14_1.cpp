#include <iostream>
#include <cmath>
using namespace std;
struct comp{
    double x, y;
    
    comp sum(comp b){
        comp a;
        a.x = x + b.x;
        a.y = y + b.y;
        return a;
    }
    comp diff(comp b) {
        comp a;
        a.x = x - b.x;
        a.y = y - b.y;
        return a;
    }
    comp pdt(comp b) {
        comp a;
        a.x = x*(b.x) - y*(b.y);
        a.y = x*(b.y) + y*(b.x);
        return a;
    }
    comp div(comp b) {
        comp a;
        a.x = (x*(b.x) + y*(b.y))/((b.x*b.x + b.y*b.y));
        a.y = (y*(b.x) - x*(b.y))/((b.x*b.x + b.y*b.y));
        return a;
    }
};
int main() {
    comp p, q, r;
    cin >> p.x >> p.y;
    cin >> q.x >> q.y;
    char command;
    cin >> command;
    switch(command) {
        case 'a' :
            cout << "sum " << p.sum(q).x << " " << p.sum(q).y << endl;
            break;
        case 's':
            cout << "difference " << p.diff(q).x << " " << p.diff(q).y << endl;
            break;
        case 'm':
            cout << "product " << p.pdt(q).x << ' '<< p.pdt(q).y << endl;
            break;
        case 'd':
            cout << "division " << p.div(q).x << ' ' << p.div(q).y << endl;
            break;
        default :
            cout << "not a valid input (a/s/m/d)";
    }
}