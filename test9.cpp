#include <simplecpp>
template<typename T>
T bs(T x) {
	(x>0) ? return x : return -x;
}
main_program {
	int a = -10;
	float b = -20.1;
	double c = -0.01;
	cout << bs(a) << endl << bs(b) << endl << bs(c) << endl;
}

	
