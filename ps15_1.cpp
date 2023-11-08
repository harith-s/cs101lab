#include <iostream>
using namespace std;
struct poly {
    double p[101]; int degree;
    poly(){
        for (int i = 0; i < 101; i++) {
            p[i]=0;
        }
    }
    double value(double x){
        double sum = 0;
        double t = 1;
        for (int i = 0; i < degree + 1; i++, t = t*x){
                sum +=p[i]*t;
        }
        return sum;
    }
   poly operator+ (const poly &b) const{
        poly c;
        int deg;
        degree > b.degree ? c.degree = degree : c.degree = b.degree;
        for (int i = 0; i < c.degree + 1; i++) {
            c.p[i] = p[i] + b.p[i];
        }
        return c;
    }
    poly operator- (const poly &b) const{
        poly c;
        int deg;
        degree > b.degree ? c.degree = degree : c.degree = b.degree;
        for (int i = 0; i < c.degree + 1; i++) {
            c.p[i] = p[i] - b.p[i];
        }
        return c;
    }
    poly operator* (const poly& b) const{
        poly c;
        c.degree = degree+b.degree;
        if (c.degree > 100) {
            cout << "degree of resulting polynomial is greater than 100";
            return c;
        }
        else {
            for (int i = 0; i < 101; i++) {
                for (int j = 0; j<101; j++){
                    c.p[i+j] += p[i]*b.p[j];
                }
            }
        }
        return c;
    }
    void read(){
        int d;
        cin >> d; 
        if (d>100) cout << "degree cannot be greater than 100";
        else {
            for(int i = 0; i < d+1; i++){
                cout << "coefficient of " << i << "th power of x " ;
                cin >> p[i];
            }
        }
        degree = d;
    }
    void print(){
        for(int i = 0; i < degree + 1; i++){

            if (i ==0) cout << p[i] << " + ";
            else if (i!= degree) cout << p[i] << "x^" << i << " + ";
            else cout << p[i] << "x^" << i << endl;
        }
    }
    

};
ostream & operator<< (ostream & ost, poly &c) {
    for (int i = 0; i < c.degree + 1; i++){
        if (i ==0) ost << c.p[i] << " + ";
        else if (i!= c.degree) ost << c.p[i] << "x^" << i << " + ";
        else cout << c.p[i] << "x^" << i << endl;
    }
    return ost;

}
istream & operator >> (istream & ist, poly &c) {
    c.read();
    return ist;
}

int main() {
    poly f,g, h;
    char command;
    cout << "enter g";
    g.read();
    cout << "enter f";
    cin >> f;
    cout << f << g;
    double x; cin >> x;
    cout << "value of function at x = " << x << " is " << f.value(x);
    cout << "enter command";

    cin >> command;
    switch(command){
        case 'a':
            h = f+g;
            cout << h;
            break;
        case 's':
            h = f-g;
            cout << h;
            break;
        case 'm':
            h = f*g;
            cout << h;
            break;
        default:
        cout << "incorrect command";
        

    }
}