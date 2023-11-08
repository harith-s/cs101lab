#include <simplecpp>
main_program {
	int i = 10;
	cout << i << endl << &i<< endl;
	int *r ;
	r = &i;
	//cout << r << endl << *r << endl;
	//int **r1;
	//r1 = &r;
	//cout << r1 << endl << *r1 << endl << **r1 << endl;
	int p = *r;
	cout << p << endl << &p<< endl;
	int& pref = *r;
	cout << pref << endl << &pref<< endl;

}
