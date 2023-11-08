#include <simplecpp>
int main() {
	int a[] = {1,2,3,4,5};
	int* p = a;
	cout << p << " " << a << endl;
	a++;
	cout << *p << " " << *a << endl;
}
