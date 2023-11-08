#include<simplecpp>
main_program
{
	turtleSim();
	float n;
	n=1;
repeat(25){ right(144);
repeat(20)
	{penUp(3000);
		forward(n);
		penDown(4);
		forward(n);
	}
n=n+0.5;
	wait(0.2);
}
}
