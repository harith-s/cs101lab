#include <simplecpp>
long double fact(long double x) {
	if (x==1) return 1;
	else return x*fact(x-1);

}
/*long double gcd(long double a, long double b) {
		if (a < b) {
			long double temp = a;
			a = b; b = temp;
		}
		if (a%b==0) return b;
		else {
			cout << "hi" << endl;
			return gcd(b, a%b);
		}
	}

*/
main_program {
	long double n, r;
	cin >> n >> r;
	cout << (fact(n)/(fact(r)*fact(n-r)))<<endl;
	//cout << gcd(119929244861828206, 521483382396998375);
	cout <<endl;
}
