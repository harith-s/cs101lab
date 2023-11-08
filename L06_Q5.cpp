#include <simplecpp>
int gcd(int m, int n) 
{
	if (m<n) {
		int temp = m;
		m = n; n = temp;
	}
	if (m%n ==0) return n;
	else return gcd(n, m%n);
} 
main_program {
	int a, b, c;
	cin >> a >> b >> c;
	if (c % gcd(a,b) == 0 ) {
		int y = 0;
		while (True) {
			if ((c-b*y) % a == 0) {
				cout << "x = " << (c-b*y)/a << " and y = " << y;
				break;
			}
			else if ((c-b*(-y)) % a == 0) {
                                 cout << "x = " << (c-b*(-y))/a << " and y = " << -y;
                                break;
			}
			y++;
		
		}
		cout << endl;
	}
	else cout << "no solution" << endl;
}
int sol(int a, int b, int c) {
	int x, y;
	int count = 0;
	if (c % gcd(a,b) == 0) {
			while ((a > 1) && (b > 1)) {
				if (a > b) 
				{ 	
					a = a - b; 
					count++;
				}
				else if (b > a) {
					b = b - a;
					count++;
				}
			}
			(a == 1) ? x = c - b*y : y = c - a*x;
			while (count>0) {
				if 

			
		
