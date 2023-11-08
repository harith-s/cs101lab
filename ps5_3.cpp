#include <simplecpp>
main_program {
	double a, b, c = 0;
	cin >> a >> b >> c ;
	float x, disc;
	disc = b*b - 4*a*c;
	if ((a!=0) && (disc >=0)) {
		cout << (disc > 0 ? "real" : "equal") << endl;
		cout << ((-b) + sqrt(disc))/(2*a) << endl;
		cout << ((-b) - sqrt(disc))/(2*a) << endl;
	}
	else if (a !=0) {
		cout << "roots are imaginary";
		cout << ((-b)/(2*a)) << " +/- "<< sqrt(-disc)/(2*a) << "i"<< endl;
	}
	else {
		cout << "a shouldn't be zero";
	}
}
