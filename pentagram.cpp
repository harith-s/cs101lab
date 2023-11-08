#include <simplecpp>
main_program {
	turtleSim();
	repeat(5) {
		left(180);
		forward(80);
		left(180);
		forward(210); // the turtle moves backward and forward while tracing out a pentagon since a pentagram is just an extension of a pentagon
		left(180);
		forward(80);
		right(108);
	}
	wait(10);
}


