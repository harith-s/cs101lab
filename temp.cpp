#include <simplecpp>
template <typename T>
T abss(T x) {
	if (x>=0) return x;
	else return -x;
}
main_program {
	cout << abss(-1) << endl << abss(-1.2) << endl;
}
