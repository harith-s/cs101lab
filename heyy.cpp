#include <iostream>
using namespace std;
int gcd(int m, int n) {
        if (m%n ==0) return n;
        else return gcd(n, m%n);
}
int lcm(int a, int b) {
	return ((a*b)/gcd(a,b));
}
int main(){
	cout << lcm(90,78);
}