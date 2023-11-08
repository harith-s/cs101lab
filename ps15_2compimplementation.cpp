#include <iostream>
using namespace std;
#include "ps15_2comp.h"
comp::comp(){
        x = y = 0;
    }
comp::comp(double a){
        x = a; y = 0;
    }
comp::comp(double a, double b){
        x = a; y = b;
}
    
    
comp comp::operator+ (const comp &b) const{
        return comp(x + b.x, y + b.y);
}
comp comp::operator- (const comp &b) const{
        return comp(x - b.x, y - b.y);
}
comp comp::operator* (const comp &b) const{
        return comp(x*(b.x) - y*(b.y), x*(b.y) + y*(b.x));
}
comp comp::operator/(const comp &b) const{
        comp a;
        a.x = (x*(b.x) + y*(b.y))/((b.x*b.x + b.y*b.y));
        a.y = (y*(b.x) - x*(b.y))/((b.x*b.x + b.y*b.y));
        return a;
    
}
ostream & operator << (ostream &ost, comp &a) {
        ost << a.x << " + " << a.y << "i ";
        return ost;
}

istream & operator >> (istream &ist, comp &a) {
    int narg; cin >> narg;
    double p, q;
    switch(narg){
        case 0: 
            a = comp();
            break;
        case 1:
            cin >> p;
            a = comp(p);
            break;
        case 2:
            cin>> p >> q;
            a = comp(p,q);
            break;
        default :
            cout << "invalid argument";

    }
    return ist;
}