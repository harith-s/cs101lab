#include <iostream>
using namespace std;
struct matrix{
    double a, b, c, d;
    matrix(double x = 0, double y = 0, double z = 0, double w = 0){
        a = x; b = y; c = z; d = w; 
    }
    double det(){
        return (a*d-b*c);
    }
    bool issinglular(){
        if ((*this).det() == 0) return true;
        else return false;

    }
    void print() {
        cout << a << " " << b << endl;
        cout << c << ' ' << d << endl;
    }
    matrix inverse() {
        matrix inv;
        inv.a = d/((*this).det());
        inv.d = a/((*this).det());
        inv.b = -b/((*this).det());
        inv.c = -c/((*this).det());
        return inv;
    }
};


int main() {
    matrix m(1,2,3,4);
    cout << "det " << m.det() << endl;
    cout << m.issinglular() << endl;
    m.print();
    m.inverse().print();
}