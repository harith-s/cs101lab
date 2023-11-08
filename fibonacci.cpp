#include <simplecpp>
int fib(int a, int& count) {
	count++;
	if ((a == 0) || (a ==1)) return 1;
	else return fib(a-1, count) + fib(a-2, count);
}

main_program {
	int n;
	cin >> n;
	int c = 0;
	//a = a-1 + a - 2;
	//a-1=a-2+a-3;
	//;;;

	//cout << fib(n, c) << endl;
	//cout << c;
	int a1 = 1;
	int i = 1;
	int a0 = 1;
	int a;
	while(i < n) {
		a = a1+a0;
		a0 = a1;
		a1 = a;
		i++;
	}
	cout << a;

}
