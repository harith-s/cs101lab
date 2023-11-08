#include <simplecpp>
main_program {
	cout << "think of a number" << endl;
	int xl = 0, xr = 1001;
	repeat(10) {
		int xm = (xl + xr)/2;
		cout << "is your number between" << xl << " and " << xm;
		char resp;
		cin >> resp;
		if (resp == 'y') xr = xm+1;
		else xl = xm;
		if (xr - xl == 1) 
		{
			xr++;
			cout << "is your number between" << xl << " and " << xr;
			cin >> resp;
			if (resp== 'y') {cout << xr - 1; break;}
			else {cout << xl; break;}
		}
		if (xr - xl == 2) {
			cout << (xl+xr)/2;
			break;
		}
		
		if (xl == xr) {
			cout << xl;
			break;
		}
		
	}
}
