#include <simplecpp>
float nsin(float n, float b)
{
	return (sine(b) - n);    //this returns whether the xL_is_positive kinda
}

float bs(float xl, float xr, float epsilon, float (*pf)(float x, float b),float n)
{	while ((xr-xl) >= epsilon) {
               	float xm = (xl+xr)/2;
                if (((*pf)(n, xm) * (*pf)(n, xr)) <= 0 )  xl = xm;         //the actual bijection thing
                else xr = xm;

      	}
	return xr;
                
        
}
int main() {
	float n;
	cin >> n;
	cout << bs(0, 90, 0.001, &nsin, n);  // we're passing the xl, xr, ep, address of the function, and the value we need to find the root of
}
