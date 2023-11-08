#include <simplecpp>
main_program {
	char small, capital;
	cout << "type a lower case letter";
	cin >> small;
	small = small + 'A' - 'a';
	cout << small << endl;
}
