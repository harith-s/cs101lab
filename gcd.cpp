#include <simplecpp>
main_program {
	int n1, n2;
	cout << "enter two numbers";
	cin >> n1 >> n2;
	while ((n1 <=0) || (n2<=0)) {
                cout << "enter positive integers";
                cin >> n1 >> n2;
        }


	while (rem > 0) {
		int temp; 
		if (n1 > n2) {
			temp = n2;
			n2 = n1 % n2;
			rem = n2;
			n1 = temp;
		}
		if (n2 > n1) {
                        temp = n1;
                        n1 = n2 % n1;
                        rem = n1;
                        n2 = temp;
		}
	
	}
	if (n1 !=0) { cout << n1;}
	else {cout << n2;}

}
