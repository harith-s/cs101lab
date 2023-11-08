#include <simplecpp>
float cubefn(float x, float a) {
                return x*x*x - a;    //to avoid the amount of times this part of code is resused, a function is defined
}
float cubert(float a, int n) 
{
	int guess = 0;
	while (cubefn(guess, a) < 0) {
		guess++;			//to get the best integer guess first
	
	}
	int f = (cubefn(guess, a) ==0) ? 1 : 0; //to check whether the guess is the actual cube root
	float xn = float(guess);
	repeat(n) 
	{	
		xn = xn - (cubefn(xn, a))/(3*xn*xn);
	}
	return f ? guess : xn;
}
main_program 
{
	float t; int n; //the value whose cube root has to be found out, and the number of iterations
	cin >> t >> n;
	cout << cubert(t, n) << endl;
}

