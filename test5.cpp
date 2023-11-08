#include <simplecpp>

void swapp(int *m, int *n) 
{
	int temp = *m;
	*m = *n; *n = temp;
}
main_program {
	int a = 100, b = 9;
	swapp(&a, &b);
	cout << a << " is a " << b << " is b " << endl;
}
