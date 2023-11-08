#include <simplecpp>
main_program {
	float n;
	cin >> n;
	int a = n*256;
	while (a > 0) {
		int rem;
		int q;
		rem = a % 256;
		q = a/256;


