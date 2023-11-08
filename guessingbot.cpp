#include <simplecpp>

int guess(int a) {
	int xl = 0, xr = 1001;
        repeat(10) {
                int xm = (xl + xr)/2;
                
		char resp;
                ((xl<=a) && (a<=xm)) ? resp = 'y' : resp = 'n';

                if (resp == 'y') xr = xm+1;
                else xl = xm;
                
		if (xr - xl == 1)
                {
                        xr++;
                        ((xl<=a) && (a<=xm)) ? resp = 'y' : resp = 'n';
                        if (resp== 'y') return (xr - 1); 
  			else return xl;
                }
		else if (xr - xl == 2) return (xl+xr)/2;
		else if (xl == xr) return xl;
                    
              

        }
	return 10000;
}
main_program {
	int i = 1;
	while (i<=1000) {
		if (i != guess(i)) cout << "problem at " << i << endl;
		i++;
	}
}


