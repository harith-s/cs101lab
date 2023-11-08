#include <simplecpp>
main_program {
	int n; int x;
	//cout << " Give the degree of the polynomial and the value of x : ";
	cin >> n >> x; // number of terms and value of x
	int i = 0;
	double sum = 0;
	repeat(n+1) {
		float coeff;
		cin >> coeff;
		sum = sum + coeff * pow(x, i);
		i = i + 1; 
	}
	cout << sum << endl;
}
		
