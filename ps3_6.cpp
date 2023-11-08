#include <simplecpp>
main_program {
	int n, i = 0;
	double x, sum = 0, fact = 1.0, arg;
	cout << "enter the number of terms and the value of x in degrees : ";
	cin >> n >> arg;
	x = arg * (PI/180);
	cout << x;
	repeat(n) {
		sum = sum + (pow((-1), i)*pow(x, 2.0*i + 1))/fact;
		cout << sum << endl;
		i = i + 1;
		fact = fact * (2*i) * (2*i + 1);
	}
	cout << sum << endl;
}

