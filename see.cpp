#include<simplecpp>
main_program{
	initCanvas("e",1000,1000);
	Turtle t;
	repeat(10000){
		for (int i = 0; i < 10000; i++) 
		{
			srand(i);
		t.forward(round(randuv(-100,100)));
		t.left(round(randuv(-90,90)));
		cout << round ((randuv(-100,100)))<< endl << (randuv(-90, 90)) << endl;
		wait(1);
		}

	}
	wait(2);
}

