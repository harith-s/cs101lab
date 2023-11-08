#include <simplecpp>
main_program {
	turtleSim();
	repeat(10000) {
		forward(0.1);
		left(0.1);
	}
	wait(10);
}

