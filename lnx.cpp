#include <simplecpp>
float ln(float x) {
	float sum = 0;
	float t = 0.01 * (x-1);
	for (float r = 1 + t; r <= x; r = r + t) {
		 sum = sum + (1/6.0)*(1/(r-t) + 4 * 2 * (1/(2*r - t)) + 1/r);
		 
	}
	return sum;
}
main_program {
	do 
	{
		float n;
		cin >> n ;
		cout << ln(n) << endl;
	}
	while (True);
}

