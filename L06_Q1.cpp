#include <simplecpp>
int rfact(int a) {
	if (a==1) return 1;
	else return a*rfact(a-1);
}
main_program {
	int n;
	cin >> n;
	cout  << rfact(n);
}
