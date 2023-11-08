#include <simplecpp>
main_program {
	initCanvas("hi");
	Turtle t1, t2, t3;
	t1.left(90);
	t2.right(90);
	t1.forward(100);
	t2.forward(100);
	t3.forward(100);
	getClick();
	
	t1.forward(100);
	wait(5);
}
