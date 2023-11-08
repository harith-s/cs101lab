#include <iostream>
using namespace std;

int main() {
	int n = 1; int *rn = &n;
	float m = 2; float *rm = &m;
	char a = 'a'; char *ra = &a;
	cout << sizeof(rn) << endl << sizeof(rm) << endl << sizeof(ra) << endl;
	char name[10] = "harith";
	for (int i=0; i<10; i++) {
		cout << name[i] ;
	}
}

