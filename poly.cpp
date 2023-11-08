#include <simplecpp>
main_program {
	int sides;
	int sidel;
	cout <<"type the number of sides : ";
	cin >> sides;
	cout <<"type the length of sides : ";
	cin >> sidel;
	turtleSim();
	repeat(sides) {
		forward(sidel);
		left(360.0/sides); //float since in most cases the number won't divide 360 perfectly
	}
	wait(10);
}


