#include <simplecpp>
float f(float x)
{
        return (x*x*x - 8);
}

float root (float xl, float xr, float epsilon)

{
	while (xr - xl > epsilon) 
	{	if ((f(xr) == 0)|| (f(xl) == 0)) { 
				if (f(xr) == 0) xl = xr;
				break;
		}
		float xm = (xl + xr)/2;
		((f(xm) * f(xr)) < 0 ) ? xl = xm : xr = xm;
	}
	return xl;	
}

main_program {
	cout << root(0, 16, 0.000001) << endl;
}
