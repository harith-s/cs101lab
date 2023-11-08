#include <iostream>
using namespace std;
struct comp{
    double x, y;
    comp(){
        x = y = 0;
    }
    comp(double a){
        x = a; y = 0;
    }
    comp(double a, double b){
        x = a; y = b;
    }
    
    
    comp operator+ (const comp &b) const{
        return comp(x + b.x, y + b.y);
    }
    comp operator- (const comp &b) const{
        return comp(x - b.x, y - b.y);
    }
    comp operator* (const comp &b) const{
        return comp(x*(b.x) - y*(b.y), x*(b.y) + y*(b.x));
    }
    comp operator/(const comp &b) const{
        comp a;
        a.x = (x*(b.x) + y*(b.y))/((b.x*b.x + b.y*b.y));
        a.y = (y*(b.x) - x*(b.y))/((b.x*b.x + b.y*b.y));
        return a;
    
    }
};
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
int main(){
    char command;
    comp a, b;
    cin >> a >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b<< endl;
    cout << "enter command";
    cin >> command;
    comp temp;
    switch(command) {
        case 'a' :
            temp = a + b;
            cout << temp << endl;
            break;
        case 's':
            temp = a - b;
            cout << temp << endl;
            break;
        case 'm':
            temp = a * b;
            cout << temp << endl;
            break;
        case 'd':
            temp = a / b;
            cout << temp << endl;
            break;
        default :
            cout << "not a valid input (a/s/m/d)";
    }   
}