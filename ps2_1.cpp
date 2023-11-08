#include <simplecpp>
main_program {
	int n; float a, d;
	cout << "type out a, d, n : " ;
	cin >> a >> d >> n;
        cout << endl;	//cout << a << " " << d << "   " << n;
	int i = 0 ;
	repeat(n+1) {
		cout << a +i*d << ", ";
		i = i + 1;
	}
	cout << endl;
	
}
