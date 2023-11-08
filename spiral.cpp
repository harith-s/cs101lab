#include<simplecpp>
main_program
{
	float n ;
	n=2 ;
	turtleSim();
	repeat(300)
	{forward(n);
		left(5);
		n=n+0.02 ;
	}
	wait(3);
}
