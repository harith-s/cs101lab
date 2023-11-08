#include <simplecpp>
int gcd (int m, int n) {
	if (m < n) {
		int temp;
		temp = m; m = n; n = temp; 
	}
	if (not (m > 0) && (n > 0)){
		cout << "input positive integers" ; }
	while (m % n !=0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return n;

}
int lcm(int m, int n) {
	return (m*n)/(gcd(m,n));
}
main_program {
	cout << gcd(1728, 90) << endl;
	cout << lcm(1728, 90) << endl; 
	int r = 10;
	int *pointer;
	pointer = &r;
	cout << &r << endl << pointer << endl << *pointer << endl ;
	cout << type(pointer);
}





