#include <iostream>
using namespace std;
int gcd(int m, int n)
{
        if (m<n) {
                int temp = m;
                m = n; n = temp;
        }
        if (m%n ==0) return n;
        else return gcd(n, m%n);

}
struct ratio{
    private :
        int num, den;
    public:
        friend int gcd(int m, int n);
        friend ostream & operator << (ostream &ost, ratio y);
        ratio(int n=0, int d=1){
            num = n; den = d;
        }
        ratio operator+ (const ratio &y) const{
            ratio sum;
            sum.num = num*y.den + den*y.num;
            sum.den = den*y.den;
            sum.simplify();
            return sum;
        }
        ratio operator- (const ratio &y) const{
            ratio diff;
            diff.num = num*y.den - den*y.num;
            diff.den = den*y.den;
            diff.simplify();
            return diff;
        }
        ratio operator* (const ratio &y) const{
            ratio pdt;
            pdt.num = num*y.num;
            pdt.den = den*y.den;
            pdt.simplify();
            return pdt;
        }
        ratio operator/ (const ratio &y) const{
            ratio div;
            div.num = num*y.den;
            div.den = den*y.num;
            div.simplify();
            return div;
        }
        bool operator < (const ratio &y) const {
            if (num*y.den < den*y.num) return true;
            else return false;
        }
        bool operator > (const ratio &y) const {
            if (num*y.den > den*y.num) return true;
            else return false;
        }
        bool operator == (const ratio &y) const {
            if (num*y.den == den*y.num) return true;
            else return false;
        }
        ratio operator = (const ratio &y) {
            num = y.num; den =y.den;
            return *this;
        }
        void simplify(){
            if (num !=0)
            {
                int g = gcd(num, den);
                num = num/g; den = den/g;
            }
            else {
                num = 0; den = 1;
            }
            }

        

        


};
ostream & operator << (ostream &ost, ratio y){
    ost << y.num << "/" << y.den << endl;
    return ost;
}
int main() {
    ratio a(1,2);
    ratio b(2,4);
    ratio c(1,3);
    ratio d(2,3);
    ratio e;
    e = a;
    char command;
    while (true) {
        cin >> command;
    ratio temp;
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
        case '>':
            if (a>c) cout << "yes";
            else cout << "no";
            break;
        case '<':
            if (a<c) cout << "yes";
            else cout << "no";
            break;
        case 'e':
            if (a==b) cout << "yes";
            else cout << "no";
            break;  
        default :
            cout << "not a valid input (a/s/m/d)";
    }   
    cout << "e = "; cout << e;


}
}