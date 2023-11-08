#include <simplecpp>
main_program {
	srand(time(0));
	int hcount = 0;
	int tcount = 0;
	repeat(100) {
		int i = floor(randuv(0,2));
		switch(i) {
			case 0 : cout << "H ";
				 hcount++;
				 break;
			case 1 : cout << "T ";
				 tcount++;
				 break;

		}
	
	
	}
	cout << endl;
	cout << "number of heads : " << hcount << endl;
	cout << "number of tails : " << tcount << endl;
}

