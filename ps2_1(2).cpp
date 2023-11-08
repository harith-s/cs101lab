#include <simplecpp>
main_program {
	int n; float a, r;
	cout << "type in a, r, n :" ;
	cin >> a >> r >> n;
	cout << endl;
	int i = 0;
	repeat(n+1) {
		cout << a * pow(r, i) << ", ";
		i = i + 1;
	}
	cout << endl;
}
