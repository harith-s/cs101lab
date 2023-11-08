#include <simplecpp>
main_program {
	int n ;
	int spokes;
	cout << "type the precision: ";
	cin >> n;
	cout << "type the number of spokes: ";
	cin >> spokes;
	turtleSim();

	repeat(n){
		forward(float(500/n));
		left(float(360/n));
	}
	repeat(spokes) {
		right(90);
		forward(20);
		left(180);
		forward(20);
		right(90);
		repeat(spokes) {
			forward(float(25/spokes));
			left(float(18/spokes));
		}
	}
	wait(5);
}


