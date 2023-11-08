#include <simplecpp>
main_program {
	turtleSim();
	repeat(7) {
		forward(200);
		right(180.0-(180.0/7)); // we calculate the angle turned by figuring out the angle at each point by using 180/(number of sides)
	}
	wait(5);
}
