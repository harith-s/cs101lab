#include <simplecpp>
main_program{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 >= n2) {
		if (n2 >= n3){
			cout << n3 << ", " <<  n2 << ", " << n1 << endl; // checking for the conditions for two variables first, finding the relation between them and moving onto the next varibles
		}
		else {
			if (n1 >= n3){
				cout << n2 << ", " <<  n3 << ", " << n1 << endl;
			}
			else {
				cout << n2 << ", " <<  n1 << ", " << n3 << endl;
			}
		}
	}
	else {
		if (n1 >= n3){
                        cout << n3 << ", " <<  n1 << ", " << n2 << endl;
                }
                else {
			if (n2 >= n3){
                                cout << n1 << ", " <<  n3 << ", " << n2 << endl;
                        }
                        else {
                                cout << n1 << ", " <<  n2 << ", " << n3 << endl;
			}
		}
	}
}

