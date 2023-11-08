#include <simplecpp>
float nsin(float x, float b)
{
	return (sine(b) - x);
}
void asinn(float x, float epsilon) {
	if ((abs(x)<=1) && (x != 0))
	{
		//commence bijection say x = 0.5
		float xl = -90, xr = 90;
		if (x > 0)  xl = 0;
		else if ( x < 0 ) xr = 0;


		while ((xr-xl) >= epsilon) {
			float xm = (xl+xr)/2;
			if ((nsin(x, xm) * nsin(x, xr)) <= 0 )  xl = xm;
		        else xr = xm;

		}
		cout << xr;
	}
	else if (x ==0) cout << 0;
	else cout << "not a valid input";
}


int main() {
        float n; float epsilon;
        cin >> n >> epsilon;
        asinn(n, epsilon) ;
        return 0;
}
