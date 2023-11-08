#include <simplecpp>
main_program {
	long long int n = 0;
	cin >> n;
	long long int sq = 0;
	sq = floor(sqrt(n)) ;
	cout << sq << endl << n << endl;
	bool f = False;
	while (sq > 1) {
		f = f || n % sq == 0;
		if (f) {
			break;
		}
		sq = sq - 1;
	}
	cout << ( f ? "composite" : "prime");
	cout << endl;
}















	
