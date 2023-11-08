#include <simplecpp>
void swap(int* m, int *n) {
	int f;
	f = *m;
	*m = *n;
	*n = f;
}
main_program {
	int x = 5, y = 6;
	swap(&x, &y);
	cout << x << endl << y << endl;
}
