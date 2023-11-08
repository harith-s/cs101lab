#include <simplecpp>
float cubefn(float x, float a) {
                return x*x*x - a;
}
float cubert(float a, float epsilon) 
{
	float xn;
	int guess = 0;
	while (cubefn(guess, a) < 0) {
		guess++;
	
	}
	int f = (cubefn(guess, a) ==0) ? 1 : 0; //to get the best integer guess first
	xn = float(guess);
	do 
	{	
		xn = xn - (cubefn(xn, a))/(3*xn*xn);
	}
	while (abs(cubefn(xn, a)) > epsilon);
	return f ? guess : xn;
}
main_program 
{
	int n ;
	cin >> n;
	cout << cubert(n, 0.001) << endl;
}
