#include <simplecpp>
main_program {
	int i = 1, fact1 = 1, fact2 = 1, n;
	cout << "enter the number of terms : ";
	cin >> n;
	repeat(n) {
		fact1 = fact1 * i;
		i = i + 1;
	}
	i = 1;
	double dsum = fact1;
	repeat(n) {
		fact2 = fact2 * i;
		dsum = dsum + (float(pow(-1, i) * fact1) / fact2);

		i = i + 1;
	}
	cout << dsum << endl;
}
