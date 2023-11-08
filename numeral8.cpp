#include <simplecpp>
main_program {
	turtleSim();
	repeat(1000) {
		forward(0.5);
		left(0.36);    //this is for the first circle, a specific angle has to be given so as to get a perfect circle which is 360/(total numer of sides)
	}
	repeat(1000) {
		forward(0.5);
		right(0.36); // this is for the second circle
	}
	wait(7);
}
