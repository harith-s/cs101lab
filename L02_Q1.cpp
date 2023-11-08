#include <simplecpp>
main_program {
	int n; 
	double a, d, r;
	cin >> a >> d >> r >> n; 
	int i = 0;               // important to initialize i to zero so as to get the first term as well
	repeat(n) {
		cout << a + i * d << " ";
		i = i + 1;
	}
	i = 0;                  // important to re-initialize i to 0 as previous value of i in the last iteration remains
	cout << endl;
        repeat(n) {
		cout << a << " ";
		a = a * r;
	}
	cout << endl;
}

