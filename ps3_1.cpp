#include <simplecpp>
main_program {
	int n = 0;
	cout << "Enter the number of terms : ";
	cin >> n ;
	double esum = 1;
	float fact =1, i = 2;
	repeat(n) {
		esum = esum + (1/fact);
		fact = fact * i; // fact is for storing the factorial and i is for storing the number to be multiplied next
	        i++; //post increment notation i.e does i=i+1
	}
	cout << esum << endl;
}	
